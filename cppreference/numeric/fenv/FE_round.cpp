// cppreference link https://en.cppreference.com/w/cpp/numeric/fenv/FE_round
#include <cfenv>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <string>
int main()
{
#pragma STDC FENV_ACCESS ON
    std::fesetround(FE_DOWNWARD);
    std::cout << "rounding down: \n"
              << std::setprecision(50)
              << "         pi = " << std::acos(-1.f) << '\n'
              << "stof(\"1.1\") = " << std::stof("1.1") << '\n'
              << "  rint(2.1) = " << std::rint(2.1) << "\n\n";
    std::fesetround(FE_UPWARD);
    std::cout << "rounding up: \n"
              << "         pi = " << std::acos(-1.f) << '\n'
              << "stof(\"1.1\") = " << std::stof("1.1") << '\n'
              << "  rint(2.1) = " << std::rint(2.1) << '\n';
}
