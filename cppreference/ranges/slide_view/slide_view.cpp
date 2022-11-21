// cppreference link https://en.cppreference.com/w/cpp/ranges/slide_view/slide_view
#include <algorithm>
#include <iostream>
#include <ranges>

int main()
{
    const auto source = { 1, 2, 3, 4 };

    auto slide = std::views::slide(source, 3);

    std::ranges::for_each(slide, [](std::ranges::viewable_range auto&& w) {
        std::cout << '[' << w[0] << ' ' << w[1] << ' ' << w[2] << "]\n";
    });
}
