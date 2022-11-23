// cplusplus link https://cplusplus.com/reference/iomanip\setprecision
// setprecision example
#include <iomanip> // std::setprecision
#include <iostream> // std::cout, std::fixed

int main()
{
    double f = 3.14159;
    std::cout << std::setprecision(5) << f << '\n';
    std::cout << std::setprecision(9) << f << '\n';
    std::cout << std::fixed;
    std::cout << std::setprecision(5) << f << '\n';
    std::cout << std::setprecision(9) << f << '\n';
    return 0;
}
