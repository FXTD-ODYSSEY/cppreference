// cppreference link https://en.cppreference.com/w/cpp/numeric/special_functions/comp_ellint_3
#include <cmath>
#include <iostream>
int main()
{
    std::cout << std::fixed
              << "Π(0.5,0) = " << std::comp_ellint_3(0.5, 0) << '\n'
              << "K(0.5)   = " << std::comp_ellint_1(0.5) << '\n'
              << "Π(0,0)   = " << std::comp_ellint_3(0, 0) << '\n'
              << "π/2      = " << std::acos(-1) / 2 << '\n'
              << "Π(0.5,1) = " << std::comp_ellint_3(0.5, 1) << '\n';
}
