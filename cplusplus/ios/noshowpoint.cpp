// cplusplus link https://cplusplus.com/reference/ios\noshowpoint
// modify showpoint flag
#include <iostream> // std::cout, std::showpoint, std::noshowpoint

int main()
{
    double a = 30;
    double b = 10000.0;
    double pi = 3.1416;
    std::cout.precision(5);
    std::cout << std::showpoint << a << '\t' << b << '\t' << pi << '\n';
    std::cout << std::noshowpoint << a << '\t' << b << '\t' << pi << '\n';
    return 0;
}
