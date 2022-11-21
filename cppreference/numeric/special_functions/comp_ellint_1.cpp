// cppreference link https://en.cppreference.com/w/cpp/numeric/special_functions/comp_ellint_1
#include <cmath>
#include <iostream>
int main()
{
    double hpi = std::acos(-1) / 2;
    std::cout << "K(0) = " << std::comp_ellint_1(0) << '\n'
              << "π/2 = " << hpi << '\n'
              << "K(0.5) = " << std::comp_ellint_1(0.5) << '\n'
              << "F(0.5, π/2) = " << std::ellint_1(0.5, hpi) << '\n';
    std::cout << "Period of a pendulum length 1 m at 90° initial angle is "
              << 4 * std::sqrt(1 / 9.80665) * std::comp_ellint_1(std::pow(std::sin(hpi / 2), 2)) << " s\n";
}
