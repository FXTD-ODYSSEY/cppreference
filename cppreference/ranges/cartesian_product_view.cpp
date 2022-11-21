// cppreference link https://en.cppreference.com/w/cpp/ranges/cartesian_product_view
#include <array>
#include <iostream>
#include <list>
#include <ranges>
#include <string>
#include <vector>

int main()
{
    const auto x = std::array { 'A', 'B' };
    const auto y = std::vector { 1, 2, 3 };
    const auto z = std::list<std::string> { "α", "β", "γ", "δ" };

    for (int i { 1 }; auto const& [a, b, c] : std::views::cartesian_product(x, y, z))
        std::cout << "(" << a << ' ' << b << ' ' << c << ')' << (i++ % 4 ? " " : "\n");
}
