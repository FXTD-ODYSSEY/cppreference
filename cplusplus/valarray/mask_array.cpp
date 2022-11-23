// cplusplus link https://cplusplus.com/reference/valarray\mask_array
// mask_array example
#include <cstddef> // std::size_t
#include <iostream> // std::cout
#include <valarray> // std::valarray

int main()
{
    std::valarray<int> foo(10);
    for (int i = 0; i < 10; ++i)
        foo[i] = i; //  0  1  2  3  4  5  6  7  8  9

    std::valarray<bool> mymask(10);
    for (int i = 0; i < 10; ++i)
        mymask[i] = ((i % 2) == 1); //  f  t  f  t  f  t  f  t  f  t

    foo[mymask] *= std::valarray<int>(10, 5); //  0 10  2 30  4 50  6 70  8 90
    foo[!mymask] = 0; //  0 10  0 30  0 50  0 70  0 90

    std::cout << "foo:";
    for (std::size_t i = 0; i < foo.size(); ++i)
        std::cout << foo[i] << ' ';
    std::cout << '\n';

    return 0;
}
