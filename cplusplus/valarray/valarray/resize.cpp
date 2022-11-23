// cplusplus link https://cplusplus.com/reference/valarray\valarray\resize
// valarray::resize example
#include <cstddef> // std::size_t
#include <iostream> // std::cout
#include <valarray> // std::valarray

int increment(int x) { return ++x; }

int main()
{
    std::valarray<int> myarray(10, 5); // 10 10 10 10 10
    myarray.resize(3); // 0  0  0

    std::cout << "myvalarray contains:";
    for (std::size_t n = 0; n < myarray.size(); n++)
        std::cout << ' ' << myarray[n];
    std::cout << '\n';

    return 0;
}
