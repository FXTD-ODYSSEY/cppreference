// cplusplus link https://cplusplus.com/reference/ios\ios_base\precision
// modify precision
#include <iostream> // std::cout, std::ios

int main()
{
    double f = 3.14159;
    std::cout.unsetf(std::ios::floatfield); // floatfield not set
    std::cout.precision(5);
    std::cout << f << '\n';
    std::cout.precision(10);
    std::cout << f << '\n';
    std::cout.setf(std::ios::fixed, std::ios::floatfield); // floatfield set to fixed
    std::cout << f << '\n';
    return 0;
}
