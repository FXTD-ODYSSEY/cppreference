// cppreference link https://en.cppreference.com/w/cpp/ranges/slide_view
#include <algorithm>
#include <iostream>
#include <ranges>

auto print_subrange = [](std::ranges::viewable_range auto&& r) {
    std::cout << "[";
    for (int pos {}; auto elem : r)
        std::cout << (pos++ ? " " : "") << elem;
    std::cout << "] ";
};

int main()
{
    const auto v = { 1, 2, 3, 4, 5, 6 };

    for (const unsigned width : std::views::iota(1U, 1U + v.size())) {
        auto const windows = v | std::views::slide(width);
        std::cout << "All sliding windows of width " << width << ": ";
        std::ranges::for_each(windows, print_subrange);
        std::cout << '\n';
    }
}
