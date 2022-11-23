// cplusplus link https://cplusplus.com/reference/valarray\valarray\cshift
// valarray::cshift example
#include <cstddef> // std::size_t
#include <iostream> // std::cout
#include <valarray> // std::valarray

int main()
{
    int init[] = { 10, 20, 30, 40, 50 };

    std::valarray<int> myvalarray(init, 5); // 10 20 30 40 50
    myvalarray = myvalarray.cshift(2); // 30 40 50 10 20
    myvalarray = myvalarray.cshift(-1); // 20 30 40 50 10

    std::cout << "myvalarray contains:";
    for (std::size_t n = 0; n < myvalarray.size(); n++)
        std::cout << ' ' << myvalarray[n];
    std::cout << '\n';

    return 0;
}
