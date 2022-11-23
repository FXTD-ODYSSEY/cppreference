// cplusplus link https://cplusplus.com/reference/valarray\valarray\sum
// valarray::sum example
#include <iostream> // std::cout
#include <valarray> // std::valarray

int main()
{
    int init[] = { 10, 20, 30, 40 };
    std::valarray<int> myvalarray(init, 4);
    std::cout << "The sum is " << myvalarray.sum() << '\n';

    return 0;
}
