// cppreference link https://en.cppreference.com/w/cpp/types/numeric_limits/signaling_NaN
#include <cfenv>
#include <iostream>
#include <limits>
#pragma STDC_FENV_ACCESS on
void show_fe_exceptions()
{
    int n = std::fetestexcept(FE_ALL_EXCEPT);
    if (n & FE_INVALID)
        std::cout << "FE_INVALID is raised\n";
    else if (n == 0)
        std::cout << "no exceptions are raised\n";
    std::feclearexcept(FE_ALL_EXCEPT);
}
int main()
{
    double snan = std::numeric_limits<double>::signaling_NaN();
    std::cout << "After sNaN was obtained ";
    show_fe_exceptions();
    double qnan = snan * 2.0;
    std::cout << "After sNaN was multiplied by 2 ";
    show_fe_exceptions();
    double qnan2 = qnan * 2.0;
    std::cout << "After the quieted NaN was multiplied by 2 ";
    show_fe_exceptions();
    std::cout << "The result is " << qnan2 << '\n';
}
