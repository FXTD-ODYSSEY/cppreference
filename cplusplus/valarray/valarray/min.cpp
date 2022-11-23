// cplusplus link https://cplusplus.com/reference/valarray\valarray\min
// valarray::min example
#include <iostream> // std::cout
#include <valarray> // std::valarray

int main()
{
    int init[] = { 20, 40, 10, 30 };
    std::valarray<int> myvalarray(init, 4);
    std::cout << "The min is " << myvalarray.min() << '\n';

    return 0;
}
