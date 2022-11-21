// cppreference link https://en.cppreference.com/w/cpp/ranges/zip_view
#include <array>
#include <iostream>
#include <list>
#include <ranges>
#include <string>
#include <tuple>
#include <vector>

void print(auto const rem, auto const& range)
{
    for (std::cout << rem; auto const& elem : range)
        std::cout << elem << ' ';
    std::cout << '\n';
}

int main()
{
    auto x = std::vector { 1, 2, 3, 4 };
    auto y = std::list<std::string> { "α", "β", "γ", "δ", "ε" };
    auto z = std::array { 'A', 'B', 'C', 'D', 'E', 'F' };

    print("Source views:", "");
    print("x: ", x);
    print("y: ", y);
    print("z: ", z);

    print("\nzip(x,y,z):", "");
    for (std::tuple<int&, std::string&, char&> elem : std::views::zip(x, y, z)) {
        std::cout << std::get<0>(elem) << ' '
                  << std::get<1>(elem) << ' '
                  << std::get<2>(elem) << '\n';

        std::get<char&>(elem) += ('a' - 'A'); // modifies the element of z
    }

    print("\nAfter modification, z: ", z);
}
