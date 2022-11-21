// cppreference link https://en.cppreference.com/w/cpp/algorithm/ranges/equal
#include <algorithm>
#include <iomanip>
#include <iostream>
#include <ranges>
#include <string_view>

constexpr bool is_palindrome(const std::string_view s)
{
    namespace views = std::views;
    auto forward = s | views::take(s.size() / 2);
    auto backward = s | views::reverse | views::take(s.size() / 2);
    return std::ranges::equal(forward, backward);
}

void test(const std::string_view s)
{
    std::cout << quoted(s) << " is "
              << (is_palindrome(s) ? "" : "not ")
              << "a palindrome\n";
}

int main()
{
    test("radar");
    test("hello");
    static_assert(is_palindrome("ABBA") and not is_palindrome("AC/DC"));
}
