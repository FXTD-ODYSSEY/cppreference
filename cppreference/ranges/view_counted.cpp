// cppreference link https://en.cppreference.com/w/cpp/ranges/view_counted
#include <iostream>
#include <ranges>

int main()
{
    const int a[] = { 1, 2, 3, 4, 5, 6, 7 };
    for (int i : std::views::counted(a, 3))
        std::cout << i << ' ';
    std::cout << '\n';

    const auto il = { 1, 2, 3, 4, 5 };
    for (int i : std::views::counted(il.begin() + 1, 3))
        std::cout << i << ' ';
    std::cout << '\n';
}
