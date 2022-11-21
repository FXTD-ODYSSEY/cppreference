// cppreference link https://en.cppreference.com/w/cpp/numeric/complex/sin
#include <cmath>
#include <complex>
#include <iostream>

int main()
{
    std::cout << std::fixed;
    std::complex<double> z(1, 0); // behaves like real sine along the real line
    std::cout << "sin" << z << " = " << std::sin(z)
              << " ( sin(1) = " << std::sin(1) << ")\n";

    std::complex<double> z2(0, 1); // behaves like sinh along the imaginary line
    std::cout << "sin" << z2 << " = " << std::sin(z2)
              << " (sinh(1) = " << std::sinh(1) << ")\n";
}
