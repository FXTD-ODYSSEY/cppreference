// cppreference link https://en.cppreference.com/w/cpp/ranges/adjacent_view
#include <array>
#include <cstddef>
#include <iostream>
#include <ranges>
#include <string>
#include <tuple>

int main()
{
    constexpr std::size_t window { 3 };

    constexpr std::array v { 1, 2, 3, 4, 5, 6 };
    std::cout << "v = [1 2 3 4 5 6]\n";

    for (int i {}; auto const e : v | std::views::adjacent<window>) {
        std::cout << "e = " << std::string(2 * i++, ' ') << '['
                  << std::get<0>(e) << ' '
                  << std::get<1>(e) << ' '
                  << std::get<2>(e) << "]\n";
    }
}
