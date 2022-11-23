// cplusplus link https://cplusplus.com/reference/valarray\slice\stride
// slice::stride example
#include <cstddef> // std::size_t
#include <iostream> // std::cout
#include <valarray> // std::valarray, std::slice

int main()
{
    std::valarray<int> foo(10);
    for (int i = 0; i < 10; ++i)
        foo[i] = i;

    std::slice slc(0, 5, 2);

    std::valarray<int> bar = foo[slc];

    std::cout << "slice with a stride of " << slc.stride() << ":\n";
    for (std::size_t n = 0; n < bar.size(); n++)
        std::cout << bar[n] << ' ';
    std::cout << '\n';

    return 0;
}
