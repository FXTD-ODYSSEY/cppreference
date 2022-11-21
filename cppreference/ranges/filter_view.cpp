// cppreference link https://en.cppreference.com/w/cpp/ranges/filter_view
#include <iostream>
#include <ranges>

int main()
{
    auto even = [](int i) { return 0 == i % 2; };
    auto square = [](int i) { return i * i; };

    for (int i : std::views::iota(0, 6)
            | std::views::filter(even)
            | std::views::transform(square)) {
        std::cout << i << ' ';
    }
}
