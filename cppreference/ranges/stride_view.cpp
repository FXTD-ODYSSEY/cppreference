// cppreference link https://en.cppreference.com/w/cpp/ranges/stride_view
#include <algorithm>
#include <iostream>
#include <ranges>
#include <string_view>
using namespace std::literals;

void print(std::ranges::viewable_range auto&& v, std::string_view separator = " ")
{
    for (auto const& x : v)
        std::cout << x << separator;
    std::cout << '\n';
}

int main()
{
    print(std::views::iota(1, 13) | std::views::stride(3));
    print(std::views::iota(1, 13) | std::views::stride(3) | std::views::reverse);
    print(std::views::iota(1, 13) | std::views::reverse | std::views::stride(3));

    print("0x0!133713337*x//42/A$"sv | std::views::stride(0B11) | std::views::transform([](char O) -> char { return 0100 + O; }),
        "");
}
