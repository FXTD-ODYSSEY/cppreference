// cppreference link https://en.cppreference.com/w/cpp/ranges/drop_view/drop_view
#include <algorithm>
#include <array>
#include <iostream>
#include <iterator>
#include <ranges>

int main()
{
    constexpr std::array hi { 'H', 'e', 'l', 'l', 'o', ',', ' ', 'C', '+', '+', '2', '0' };

    std::ranges::for_each(hi, [](const char c) { std::cout << c; });
    std::cout << '\n';

    constexpr auto n = std::distance(hi.cbegin(), std::ranges::find(hi, 'C'));

    auto cxx = std::ranges::drop_view { hi, n };

    std::ranges::for_each(cxx, [](const char c) { std::cout << c; });
    std::cout << '\n';
}
