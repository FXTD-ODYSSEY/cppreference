// cppreference link https://en.cppreference.com/w/cpp/experimental/special_functions/comp_ellint_2
#define __STDCPP_WANT_MATH_SPEC_FUNCS__ 1
#include <cmath>
#include <iostream>
int main()
{
    double hpi = std::acos(-1) / 2;
    std::cout << "E(0) = " << std::comp_ellint_2(0) << '\n'
              << "π/2 = " << hpi << '\n'
              << "E(0.5) = " << std::comp_ellint_2(0.5) << '\n'
              << "E(0.5, π/2) = " << std::ellint_2(0.5, hpi) << '\n';
}
