// cplusplus link https://cplusplus.com/reference/ios\hexfloat
// hexfloat floatfield
#include <iostream> // std::cout, std::hexfloat, std::defaultfloat

int main()
{
    double a = 3.1415926534;
    double b = 2006.0;
    double c = 1.0e-10;

    std::cout.precision(5);

    std::cout << "hexfloat:\n"
              << std::hexfloat;
    std::cout << a << '\n'
              << b << '\n'
              << c << '\n';

    std::cout << '\n';

    std::cout << "defaultfloat:\n"
              << std::defaultfloat;
    std::cout << a << '\n'
              << b << '\n'
              << c << '\n';

    return 0;
}
