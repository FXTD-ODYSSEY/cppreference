// cplusplus link https://cplusplus.com/reference/valarray\slice\size
// slice::size example
#include <cstddef> // std::size_t
#include <iostream> // std::cout
#include <valarray> // std::valarray, std::slice

int main()
{
    std::valarray<int> foo(10);
    for (int i = 0; i < 10; ++i)
        foo[i] = i;

    std::slice slc(0, 3, 1);

    std::valarray<int> bar = foo[slc];

    std::cout << "slice with a size of " << slc.size() << ":\n";
    for (std::size_t n = 0; n < bar.size(); n++)
        std::cout << bar[n] << ' ';
    std::cout << '\n';

    return 0;
}
