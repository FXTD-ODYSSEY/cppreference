// cppreference link https://en.cppreference.com/w/cpp/numeric/complex/acosh
#include <complex>
#include <iostream>

int main()
{
    std::cout << std::fixed;
    std::complex<double> z1(0.5, 0);
    std::cout << "acosh" << z1 << " = " << std::acosh(z1) << '\n';

    std::complex<double> z2(0.5, -0.0);
    std::cout << "acosh" << z2 << " (the other side of the cut) = "
              << std::acosh(z2) << '\n';

    // in upper half-plane, acosh = i acos
    std::complex<double> z3(1, 1), i(0, 1);
    std::cout << "acosh" << z3 << " = " << std::acosh(z3) << '\n'
              << "i*acos" << z3 << " = " << i * std::acos(z3) << '\n';
}
