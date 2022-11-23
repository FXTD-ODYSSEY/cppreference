// cplusplus link https://cplusplus.com/reference/valarray\indirect_array
// indirect_array example
#include <cstddef> // std::size_t
#include <iostream> // std::cout
#include <valarray> // std::valarray

int main()
{
    std::valarray<int> foo(8);
    for (int i = 0; i < 8; ++i)
        foo[i] = i; //  0  1  2  3  4  5  6  7

    std::size_t sel[] = { 3, 5, 6 };
    std::valarray<std::size_t> selection(sel, 3); //           *     *  *

    foo[selection] *= std::valarray<int>(10, 3); //  0  1  2 30  4 50 60 7
    foo[selection] = 0; //  0  1  2  0  4  0  0 7

    std::cout << "foo:";
    for (std::size_t i = 0; i < foo.size(); ++i)
        std::cout << ' ' << foo[i];
    std::cout << '\n';

    return 0;
}
