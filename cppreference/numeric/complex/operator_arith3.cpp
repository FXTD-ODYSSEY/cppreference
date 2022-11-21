// cppreference link https://en.cppreference.com/w/cpp/numeric/complex/operator_arith3
#include <complex>
#include <iostream>
int main()
{
    std::complex<double> c2(2, 0);
    std::complex<double> ci(0, 1);

    std::cout << ci << " + " << c2 << " = " << ci + c2 << '\n'
              << ci << " * " << ci << " = " << ci * ci << '\n'
              << ci << " + " << c2 << " / " << ci << " = " << ci + c2 / ci << '\n'
              << 1 << " / " << ci << " = " << 1. / ci << '\n';

    //    std::cout << 1.f/ci; // compile error
    //    std::cout << 1/ci; // compile error
}
