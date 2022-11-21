// cppreference link https://en.cppreference.com/w/cpp/numeric/complex/norm
#include <cassert>
#include <complex>
#include <iostream>

int main()
{
    constexpr std::complex<double> z { 3, 4 };
    static_assert(std::norm(z) == (z.real() * z.real() + z.imag() * z.imag()));
    static_assert(std::norm(z) == (z * std::conj(z)));
    assert(std::norm(z) == (std::abs(z) * std::abs(z)));
    std::cout << "std::norm(" << z << ") = " << std::norm(z) << '\n';
}
