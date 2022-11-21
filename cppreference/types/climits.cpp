// cppreference link https://en.cppreference.com/w/cpp/types/climits
#include <cfloat>
#include <iomanip>
#include <iostream>

int main()
{
    int w = 16;
    std::cout << std::left; // std::cout << std::setprecision(53);
#define COUT(x) std::cout << std::setw(w) << #x << " = " << x << '\n'

    COUT(FLT_RADIX);
    COUT(DECIMAL_DIG);
    COUT(FLT_DECIMAL_DIG);
    COUT(DBL_DECIMAL_DIG);
    COUT(LDBL_DECIMAL_DIG);
    COUT(FLT_MIN);
    COUT(DBL_MIN);
    COUT(LDBL_MIN);
    COUT(FLT_TRUE_MIN);
    COUT(DBL_TRUE_MIN);
    COUT(LDBL_TRUE_MIN);
    COUT(FLT_MAX);
    COUT(DBL_MAX);
    COUT(LDBL_MAX);
    COUT(FLT_EPSILON);
    COUT(DBL_EPSILON);
    COUT(LDBL_EPSILON);
    COUT(FLT_DIG);
    COUT(DBL_DIG);
    COUT(LDBL_DIG);
    COUT(FLT_MANT_DIG);
    COUT(DBL_MANT_DIG);
    COUT(LDBL_MANT_DIG);
    COUT(FLT_MIN_EXP);
    COUT(DBL_MIN_EXP);
    COUT(LDBL_MIN_EXP);
    COUT(FLT_MIN_10_EXP);
    COUT(DBL_MIN_10_EXP);
    COUT(LDBL_MIN_10_EXP);
    COUT(FLT_MAX_EXP);
    COUT(DBL_MAX_EXP);
    COUT(LDBL_MAX_EXP);
    COUT(FLT_MAX_10_EXP);
    COUT(DBL_MAX_10_EXP);
    COUT(LDBL_MAX_10_EXP);
    COUT(FLT_ROUNDS);
    COUT(FLT_EVAL_METHOD);
    COUT(FLT_HAS_SUBNORM);
    COUT(DBL_HAS_SUBNORM);
    COUT(LDBL_HAS_SUBNORM);
}
