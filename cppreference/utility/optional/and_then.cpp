// cppreference link https://en.cppreference.com/w/cpp/utility/optional/and_then
#include <charconv>
#include <iostream>
#include <optional>
#include <ranges>
#include <string>
#include <vector>
std::optional<int> to_int(std::string_view sv)
{
    int r {};
    auto [ptr, ec] { std::from_chars(sv.data(), sv.data() + sv.size(), r) };
    if (ec == std::errc())
        return r;
    else
        return std::nullopt;
}

int main()
{
    using namespace std::literals;

    std::vector<std::optional<std::string>> v = {
        "1234", "15 foo", "bar", "42", "5000000000", " 5"
    };

    for (auto&& x : v | std::views::transform([](auto&& o) { return o.and_then(to_int) // flatmap from strings to ints
                                                                                       // (making empty optionals where it fails)
                                                                 .transform([](int n) { return n + 1; }) // map int to int + 1
                                                                 .transform([](int n) { return std::to_string(n); }) // convert back to strings
                                                                 .or_else([] {
                                                                     return std::optional { "Null"s }; // replace all empty optionals
                                                                                                       // that were left by and_then and
                                                                                                       // ignored by transforms with "Null"
                                                                 }); }))
        std::cout << *x << '\n';
}
