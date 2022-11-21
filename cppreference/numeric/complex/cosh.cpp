// cppreference link https://en.cppreference.com/w/cpp/numeric/complex/cosh
#include <cmath>
#include <complex>
#include <iostream>

int main()
{
    std::cout << std::fixed;
    std::complex<double> z(1, 0); // behaves like real cosh along the real line
    std::cout << "cosh" << z << " = " << std::cosh(z)
              << " (cosh(1) = " << std::cosh(1) << ")\n";

    std::complex<double> z2(0, 1); // behaves like real cosine along the imaginary line
    std::cout << "cosh" << z2 << " = " << std::cosh(z2)
              << " ( cos(1) = " << std::cos(1) << ")\n";
}
