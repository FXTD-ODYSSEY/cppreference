// cppreference link https://en.cppreference.com/w/cpp/numeric/math/FP_categories
#include <cfloat>
#include <cmath>
#include <iostream>

const char* show_classification(double x)
{
    switch (std::fpclassify(x)) {
    case FP_INFINITE:
        return "Inf";
    case FP_NAN:
        return "NaN";
    case FP_NORMAL:
        return "normal";
    case FP_SUBNORMAL:
        return "subnormal";
    case FP_ZERO:
        return "zero";
    default:
        return "unknown";
    }
}
int main()
{
    std::cout << "1.0/0.0 is " << show_classification(1 / 0.0) << '\n'
              << "0.0/0.0 is " << show_classification(0.0 / 0.0) << '\n'
              << "DBL_MIN/2 is " << show_classification(DBL_MIN / 2) << '\n'
              << "-0.0 is " << show_classification(-0.0) << '\n'
              << "1.0 is " << show_classification(1.0) << '\n';
}
