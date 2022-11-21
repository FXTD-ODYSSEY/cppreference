// cppreference link https://en.cppreference.com/w/cpp/ranges/join_view
#include <iostream>
#include <ranges>
#include <string_view>
#include <vector>

int main()
{
    using namespace std::literals;
    const auto bits = { "https:"sv, "//"sv, "cppreference"sv, "."sv, "com"sv };
    for (char const c : bits | std::views::join)
        std::cout << c;
    std::cout << '\n';

    const std::vector<std::vector<int>> v { { 1, 2 }, { 3, 4, 5 }, { 6 }, { 7, 8, 9 } };
    auto jv = std::ranges::join_view(v);
    for (int const e : jv)
        std::cout << e << ' ';
    std::cout << '\n';
}
