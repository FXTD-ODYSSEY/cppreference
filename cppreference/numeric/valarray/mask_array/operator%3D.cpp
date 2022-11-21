// cppreference link https://en.cppreference.com/w/cpp/numeric/valarray/mask_array/operator%3D
#include <iomanip>
#include <iostream>
#include <valarray>

void print(std::valarray<int> const& v)
{
    for (int e : v)
        std::cout << std::setw(2) << e << ' ';
    std::cout << '\n';
}

int main()
{
    const auto init = { 1, 2, 3, 4, 5, 6, 7, 8 };
    std::valarray<int> v;

    v = init;
    v[(v % 2) == 0] = 0; // (1)
    print(v);

    v = init;
    v[(v % 2) == 1] = std::valarray<int> { -1, -2, -3, -4 }; // (2)
    print(v);

    v = init;
    v[(v % 2) == 0] = v[(v % 2) == 1]; // (3)
    print(v);
}
