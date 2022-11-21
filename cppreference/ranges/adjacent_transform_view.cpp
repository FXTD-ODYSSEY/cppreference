// cppreference link https://en.cppreference.com/w/cpp/ranges/adjacent_transform_view
#include <array>
#include <iostream>
#include <ranges>

int main()
{
    constexpr static auto source = { 1, 2, 3, 4, 5, 6 };
    constexpr int window { 3 };

    auto Fun = [](auto... ints) { return (... + ints); };
    // Alternatively, the Fun could be any ternary (in case window = 3) callable, e.g.:
    // auto Fun = [](int x, int y, int z) { return x + y + z; };

    constexpr auto view = source | std::views::adjacent_transform<window>(Fun);

    static_assert(
        view.size() == (source.size() - window + 1)
        and std::array { view[0], view[1], view[2], view[3] } == std::array { 6, 9, 12, 15 });

    for (int x : view)
        std::cout << x << ' ';
    std::cout << '\n';
}
