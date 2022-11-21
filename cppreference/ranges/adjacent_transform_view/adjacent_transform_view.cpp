// cppreference link https://en.cppreference.com/w/cpp/ranges/adjacent_transform_view/adjacent_transform_view
#include <algorithm>
#include <iostream>
#include <iterator>
#include <ranges>

int main()
{
    constexpr static auto v = { 1, 2, 3, 4, 5 };
    constexpr auto mul = [](auto... x) { return (... * x); };
    constexpr auto view = std::views::adjacent_transform<3>(v, mul);
    std::ranges::copy(view, std::ostream_iterator<int>(std::cout, " "));
    std::cout << '\n';
}
