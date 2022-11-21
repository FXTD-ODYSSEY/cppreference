// cppreference link https://en.cppreference.com/w/cpp/experimental/special_functions/comp_ellint_3
#define __STDCPP_WANT_MATH_SPEC_FUNCS__ 1
#include <cmath>
#include <iostream>
int main()
{
    double hpi = std::acos(-1) / 2;
    std::cout << "Π(0, 0.75) = " << std::comp_ellint_3(0, 0.75) << '\n'
              << "π/2 = " << hpi << '\n'
              << "Π(0.5, 0.75) = " << std::comp_ellint_3(0.5, 0.75) << '\n'
              << "Π(0.5, 0.75, π/2) = " << std::ellint_3(0.5, 0.75, hpi) << '\n';
}
