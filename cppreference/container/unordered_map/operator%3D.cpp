// cppreference link https://en.cppreference.com/w/cpp/container/unordered_map/operator%3D
#include <initializer_list>
#include <iostream>
#include <iterator>
#include <unordered_map>
#include <utility>

void print(auto const comment, auto const& container)
{
    auto size = std::size(container);
    std::cout << comment << "{ ";
    for (auto const& [key, value] : container)
        std::cout << '{' << key << ',' << value << (--size ? "}, " : "} ");
    std::cout << "}\n";
}

int main()
{
    std::unordered_map<int, int> x { { 1, 1 }, { 2, 2 }, { 3, 3 } }, y, z;
    const auto w = { std::pair<const int, int> { 4, 4 }, { 5, 5 }, { 6, 6 }, { 7, 7 } };

    std::cout << "Initially:\n";
    print("x = ", x);
    print("y = ", y);
    print("z = ", z);

    std::cout << "Copy assignment copies data from x to y:\n";
    y = x;
    print("x = ", x);
    print("y = ", y);

    std::cout << "Move assignment moves data from x to z, modifying both x and z:\n";
    z = std::move(x);
    print("x = ", x);
    print("z = ", z);

    std::cout << "Assignment of initializer_list w to z:\n";
    z = w;
    print("w = ", w);
    print("z = ", z);
}
