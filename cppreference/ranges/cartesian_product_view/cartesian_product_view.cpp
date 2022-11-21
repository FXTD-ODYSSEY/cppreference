// cppreference link https://en.cppreference.com/w/cpp/ranges/cartesian_product_view/cartesian_product_view
#include <array>
#include <print>
#include <ranges>
#include <vector>

int main()
{
    auto x = std::array { 'A', 'B' };
    auto y = std::vector { 1, 2, 3 };
    auto z = std::vector { -1, -2, -3 };

    auto v = std::ranges::cartesian_product_view(x, y, z); // overload (2)

    for (int i { 1 }; auto const& [rx, ry, rz] : v)
        std::print("({} {} {}){}", rx, ry, rz, (i++ % 3) ? ' ' : '\n');
}
