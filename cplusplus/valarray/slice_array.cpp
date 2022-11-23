// cplusplus link https://cplusplus.com/reference/valarray\slice_array
// slice_array example
#include <cstddef> // std::size_t
#include <iostream> // std::cout
#include <valarray> // std::valarray, std::slice

int main()
{
    std::valarray<int> foo(9);
    for (int i = 0; i < 9; ++i)
        foo[i] = i; //  0  1  2  3  4  5  6  7  8
                    //     |     |     |
    std::slice myslice = std::slice(1, 3, 2); //     v     v     v
    foo[myslice] *= std::valarray<int>(10, 3); //  0 10  2 30  4 50  6  7  8
                                               //  |        |        |
    foo[std::slice(0, 3, 3)] = 99; //  v        v        v
                                   // 99 10  2 99  4 50 99  7  8
    std::cout << "foo:";
    for (std::size_t n = 0; n < foo.size(); n++)
        std::cout << ' ' << foo[n];
    std::cout << '\n';

    return 0;
}
