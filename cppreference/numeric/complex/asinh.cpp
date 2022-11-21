// cppreference link https://en.cppreference.com/w/cpp/numeric/complex/asinh
#include <complex>
#include <iostream>

int main()
{
    std::cout << std::fixed;
    std::complex<double> z1(0, -2);
    std::cout << "asinh" << z1 << " = " << std::asinh(z1) << '\n';

    std::complex<double> z2(-0.0, -2);
    std::cout << "asinh" << z2 << " (the other side of the cut) = "
              << std::asinh(z2) << '\n';

    // for any z, asinh(z) = asin(iz)/i
    std::complex<double> z3(1, 2);
    std::complex<double> i(0, 1);
    std::cout << "asinh" << z3 << " = " << std::asinh(z3) << '\n'
              << "asin" << z3 * i << "/i = " << std::asin(z3 * i) / i << '\n';
}
