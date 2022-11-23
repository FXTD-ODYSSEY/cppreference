// cplusplus link https://cplusplus.com/reference/valarray\gslice
// gslice example
#include <cstddef> // std::size_t
#include <iostream> // std::cout
#include <valarray> // std::valarray, std::gslice

int main()
{
    std::valarray<int> foo(14);
    for (int i = 0; i < 14; ++i)
        foo[i] = i;

    std::size_t start = 1;
    std::size_t lengths[] = { 2, 3 };
    std::size_t strides[] = { 7, 2 };

    std::gslice mygslice(start,
        std::valarray<std::size_t>(lengths, 2),
        std::valarray<std::size_t>(strides, 2));

    std::valarray<int> bar = foo[mygslice];

    std::cout << "gslice:";
    for (std::size_t n = 0; n < bar.size(); n++)
        std::cout << ' ' << bar[n];
    std::cout << '\n';

    return 0;
}
