// cppreference link https://en.cppreference.com/w/cpp/ranges/view_interface/operator_bool
#include <array>
#include <iostream>
#include <ranges>

int main()
{
    const std::array ints { 0, 1, 2, 3, 4 };
    auto odds = ints | std::views::filter([](int i) { return 0 != i % 2; });
    auto negs = ints | std::views::filter([](int i) { return i < 0; });
    std::cout << std::boolalpha
              << "Has odd numbers: " << (!!odds) << ' ' << '\n'
              << "Has negative numbers: " << (!!negs) << ' ' << '\n';
}
