// cppreference link https://en.cppreference.com/w/cpp/ranges/take_while_view
#include <iostream>
#include <ranges>

int main()
{
    for (int year : std::views::iota(2020)
            | std::views::take_while([](int y) { return y <= 2023; }))
        std::cout << year << ' ';
    std::cout << '\n';

    const char idea[] { "Today is yesterday's tomorrow!..." };
    for (char x : std::ranges::take_while_view(idea, [](char c) { return c != '.'; }))
        std::cout << x;
    std::cout << '\n';
}
