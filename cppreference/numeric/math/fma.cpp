// cppreference link https://en.cppreference.com/w/cpp/numeric/math/fma
#include <cfenv>
#include <cmath>
#include <iomanip>
#include <iostream>
#ifndef __GNUC__
#pragma STDC FENV_ACCESS ON
#endif
int main()
{
    // demo the difference between fma and built-in operators
    const double in = 0.1;
    std::cout << "0.1 double is " << std::setprecision(23) << in
              << " (" << std::hexfloat << in << std::defaultfloat << ")\n"
              << "0.1*10 is 1.0000000000000000555112 (0x8.0000000000002p-3), "
              << "or 1.0 if rounded to double\n";
    const double expr_result = 0.1 * 10 - 1;
    const double fma_result = std::fma(0.1, 10, -1);
    std::cout << "0.1 * 10 - 1 = " << expr_result
              << ": 1 subtracted after intermediate rounding\n"
              << "fma(0.1, 10, -1) = " << std::setprecision(6) << fma_result << " ("
              << std::hexfloat << fma_result << std::defaultfloat << ")\n\n";

    // fma is used in double-double arithmetic
    const double high = 0.1 * 10;
    const double low = std::fma(0.1, 10, -high);
    std::cout << "in double-double arithmetic, 0.1 * 10 is representable as "
              << high << " + " << low << "\n\n";

    // error handling
    std::feclearexcept(FE_ALL_EXCEPT);
    std::cout << "fma(+Inf, 10, -Inf) = " << std::fma(INFINITY, 10, -INFINITY) << '\n';
    if (std::fetestexcept(FE_INVALID))
        std::cout << "    FE_INVALID raised\n";
}
