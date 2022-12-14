// cplusplus link https://cplusplus.com/reference/ostream\endl
// endl example
#include <iostream> // std::cout, std::end

int main()
{

    int a = 100;
    double b = 3.14;

    std::cout << a;
    std::cout << std::endl; // manipulator inserted alone
    std::cout << b << std::endl
              << a * b; // manipulator in concatenated insertion
    std::endl(std::cout); // endl called as a regular function

    return 0;
}
