// cppreference link https://en.cppreference.com/w/cpp/ranges/drop_view
#include <iostream>
#include <ranges>

int main()
{
    const auto nums = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };

    for (int i : nums | std::views::drop(2))
        std::cout << i << ' ';
    std::cout << '\n';

    for (int i : std::views::iota(1, 10) | std::views::drop(2))
        std::cout << i << ' ';
    std::cout << '\n';

    for (int i : std::ranges::drop_view { nums, 2 })
        std::cout << i << ' ';
    std::cout << '\n';
}
