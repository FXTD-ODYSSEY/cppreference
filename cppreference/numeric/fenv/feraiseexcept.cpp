// cppreference link https://en.cppreference.com/w/cpp/numeric/fenv/feraiseexcept
#include <cfenv>
#include <iostream>

#pragma STDC FENV_ACCESS ON

int main()
{
    std::feclearexcept(FE_ALL_EXCEPT);
    int r = std::feraiseexcept(FE_UNDERFLOW | FE_DIVBYZERO);
    std::cout << "Raising divbyzero and underflow simultaneously "
              << (r ? "fails" : "succeeds") << " and results in\n";
    int e = std::fetestexcept(FE_ALL_EXCEPT);
    if (e & FE_DIVBYZERO) {
        std::cout << "division by zero\n";
    }
    if (e & FE_INEXACT) {
        std::cout << "inexact\n";
    }
    if (e & FE_INVALID) {
        std::cout << "invalid\n";
    }
    if (e & FE_UNDERFLOW) {
        std::cout << "underflow\n";
    }
    if (e & FE_OVERFLOW) {
        std::cout << "overflow\n";
    }
}
