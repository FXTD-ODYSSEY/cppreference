// cppreference link https://en.cppreference.com/w/cpp/ranges/slide_view/end
#include <iostream>
#include <ranges>

int main()
{
    static constexpr auto source = { 'A', 'B', 'C', 'D' };

    for (const auto subrange : source | std::views::slide(3)) {
        std::cout << "[ ";
        for (auto it = subrange.begin(); it != subrange.end(); ++it)
            std::cout << *it << ' ';
        std::cout << "]\n";
    }
}
