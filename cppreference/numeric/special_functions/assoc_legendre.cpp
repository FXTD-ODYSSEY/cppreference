// cppreference link https://en.cppreference.com/w/cpp/numeric/special_functions/assoc_legendre
#include <cmath>
#include <iostream>
double P20(double x) { return 0.5 * (3 * x * x - 1); }
double P21(double x) { return 3.0 * x * std::sqrt(1 - x * x); }
double P22(double x) { return 3 * (1 - x * x); }
int main()
{
    // spot-checks
    std::cout << std::assoc_legendre(2, 0, 0.5) << '=' << P20(0.5) << '\n'
              << std::assoc_legendre(2, 1, 0.5) << '=' << P21(0.5) << '\n'
              << std::assoc_legendre(2, 2, 0.5) << '=' << P22(0.5) << '\n';
}
