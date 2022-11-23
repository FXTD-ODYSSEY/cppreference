// cplusplus link https://cplusplus.com/reference/valarray\slice\slice
// slice::slice example
#include <cstddef> // std::size_t
#include <iostream> // std::cout
#include <valarray> // std::valarray, std::slice

int main()
{
    std::valarray<int> foo(12);
    for (int i = 0; i < 12; ++i)
        foo[i] = i;

    std::slice first;
    std::slice second(2, 3, 4);
    std::slice third(second);

    std::valarray<int> bar = foo[third];

    std::cout << "bar contains:";
    for (std::size_t n = 0; n < bar.size(); n++)
        std::cout << ' ' << bar[n];
    std::cout << '\n';

    return 0;
}
