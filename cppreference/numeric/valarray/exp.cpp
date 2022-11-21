// cppreference link https://en.cppreference.com/w/cpp/numeric/valarray/exp
#include <complex>
#include <iostream>
#include <numbers>
#include <valarray>

int main()
{
    const double pi = std::numbers::pi;
    std::valarray<std::complex<double>> v = {
        { 0, 0 }, { 0, pi / 2 }, { 0, pi }, { 0, 3 * pi / 2 }, { 0, 2 * pi }
    };
    std::valarray<std::complex<double>> v2 = std::exp(v);
    for (std::cout << std::showpos << std::fixed; auto n : v2) {
        std::cout << n << '\n';
    }
}
