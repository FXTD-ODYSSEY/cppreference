// cppreference link https://en.cppreference.com/w/cpp/experimental/special_functions/expint
#define __STDCPP_WANT_MATH_SPEC_FUNCS__ 1
#include <cmath>
#include <iostream>
int main()
{
    std::cout << "Ei(0) = " << std::expint(0) << '\n'
              << "Ei(1) = " << std::expint(1) << '\n'
              << "Gompetz constant = " << -std::exp(1) * std::expint(-1) << '\n';
}
