// cppreference link https://en.cppreference.com/w/cpp/numeric/complex/operator%22%22i
#include <complex>
#include <iostream>

int main()
{
    using namespace std::complex_literals;
    std::complex<double> c = 1.0 + 1i;
    std::cout << "abs" << c << " = " << std::abs(c) << '\n';
    std::complex<float> z = 3.0f + 4.0if;
    std::cout << "abs" << z << " = " << std::abs(z) << '\n';
}
