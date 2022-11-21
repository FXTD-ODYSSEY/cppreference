// cppreference link https://en.cppreference.com/w/cpp/algorithm/ranges/find_end
#include <algorithm>
#include <array>
#include <cctype>
#include <iostream>
#include <ranges>
#include <string_view>

void print(const auto haystack, const auto needle)
{
    const auto pos = std::distance(haystack.begin(), needle.begin());
    std::cout << "In \"";
    for (const auto c : haystack) {
        std::cout << c;
    }
    std::cout << "\" found \"";
    for (const auto c : needle) {
        std::cout << c;
    }
    std::cout << "\" at position [" << pos << ".." << pos + needle.size() << ")\n"
              << std::string(4 + pos, ' ') << std::string(needle.size(), '^') << '\n';
}

int main()
{
    using namespace std::literals;
    constexpr auto secret { "password password word..."sv };
    constexpr auto wanted { "password"sv };

    constexpr auto found1 = std::ranges::find_end(
        secret.cbegin(), secret.cend(), wanted.cbegin(), wanted.cend());
    print(secret, found1);

    constexpr auto found2 = std::ranges::find_end(secret, "word"sv);
    print(secret, found2);

    const auto found3 = std::ranges::find_end(secret, "ORD"sv,
        [](const char x, const char y) { // uses a binary predicate
            return std::tolower(x) == std::tolower(y);
        });
    print(secret, found3);

    const auto found4 = std::ranges::find_end(secret, "SWORD"sv, {}, {},
        [](char c) { return std::tolower(c); }); // projects the 2nd range
    print(secret, found4);

    static_assert(std::ranges::find_end(secret, "PASS"sv).empty()); // => not found
}
