// cppreference link https://en.cppreference.com/w/cpp/numeric/fenv/FE_DFL_ENV
#include <cfenv>
#include <iostream>

#pragma STDC FENV_ACCESS ON

void show_env()
{
    int e = std::fetestexcept(FE_ALL_EXCEPT);
    if (e & FE_DIVBYZERO)
        std::cout << "division by zero is raised\n";
    if (e & FE_INEXACT)
        std::cout << "inexact is raised\n";
    if (e & FE_INVALID)
        std::cout << "invalid is raised\n";
    if (e & FE_UNDERFLOW)
        std::cout << "underflow is raised\n";
    if (e & FE_OVERFLOW)
        std::cout << "overflow is raised\n";
    int r = std::fegetround();
    switch (r) {
    case FE_DOWNWARD:
        std::cout << "rounding down\n";
        break;
    case FE_TONEAREST:
        std::cout << "rounding to nearest\n";
        break;
    case FE_TOWARDZERO:
        std::cout << "rounding to zero\n";
        break;
    case FE_UPWARD:
        std::cout << "rounding up\n";
        break;
    }
}

int main()
{
    std::cout << "On startup: \n";
    show_env();

    std::feraiseexcept(FE_UNDERFLOW | FE_OVERFLOW);
    std::fesetround(FE_UPWARD);

    std::cout << "\nBefore restoration: \n";
    show_env();

    std::fesetenv(FE_DFL_ENV);

    std::cout << "\nAfter reset to default: \n";
    show_env();
}
