// cppreference link https://en.cppreference.com/w/cpp/iterator/counted_iterator/operator*
#include <complex>
#include <iostream>
#include <iterator>
using std::operator""i;

int main()
{
    const auto il = { 1.i, 2.i, 3.i, 4.i, 5.i };

    for (std::counted_iterator i { il.begin() + 1, 3 }; i != std::default_sentinel; ++i)
        std::cout << *i << ' ';
    std::cout << '\n';

    for (std::counted_iterator i { il.begin() + 1, 3 }; i != std::default_sentinel; ++i)
        std::cout << i->imag() << ' ';
    std::cout << '\n';
}
