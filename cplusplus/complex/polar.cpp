// cplusplus link https://cplusplus.com/reference/complex\polar
// polar example
#include <complex> // std::complex, std::polar
#include <iostream> // std::cout

int main()
{
    std::cout << "The complex whose magnitude is " << 2.0;
    std::cout << " and phase angle is " << 0.5;
    std::cout << " is " << std::polar(2.0, 0.5) << '\n';

    return 0;
}
