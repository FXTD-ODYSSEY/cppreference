// cplusplus link https://cplusplus.com/reference/valarray\valarray\max
// valarray::max example
#include <iostream> // std::cout
#include <valarray> // std::valarray

int main()
{
    int init[] = { 20, 40, 10, 30 };
    std::valarray<int> myvalarray(init, 4);
    std::cout << "The max is " << myvalarray.max() << '\n';

    return 0;
}
