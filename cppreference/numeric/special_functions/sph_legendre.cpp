// cppreference link https://en.cppreference.com/w/cpp/numeric/special_functions/sph_legendre
#include <cmath>
#include <iostream>
int main()
{
    // spot check for l=3, m=0
    double x = 1.2345;
    std::cout << "Y_3^0(" << x << ") = " << std::sph_legendre(3, 0, x) << '\n';

    // exact solution
    double pi = std::acos(-1);
    std::cout << "exact solution = "
              << 0.25 * std::sqrt(7 / pi) * (5 * std::pow(std::cos(x), 3) - 3 * std::cos(x))
              << '\n';
}
