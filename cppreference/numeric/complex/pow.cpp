// cppreference link https://en.cppreference.com/w/cpp/numeric/complex/pow
#include <complex>
#include <iostream>

int main()
{
    std::cout << std::fixed;

    std::complex<double> z(1, 2);
    std::cout << "(1,2)^2 = " << std::pow(z, 2) << '\n';

    std::complex<double> z2(-1, 0); // square root of -1
    std::cout << "-1^0.5 = " << std::pow(z2, 0.5) << '\n';

    std::complex<double> z3(-1, -0.0); // other side of the cut
    std::cout << "(-1, -0)^0.5 = " << std::pow(z3, 0.5) << '\n';

    std::complex<double> i(0, 1); // i^i = exp(-pi/2)
    std::cout << "i^i = " << std::pow(i, i) << '\n';
}
