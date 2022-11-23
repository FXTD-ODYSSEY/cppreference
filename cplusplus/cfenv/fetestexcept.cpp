// cplusplus link https://cplusplus.com/reference/cfenv\fetestexcept
/* fetestexcept example */
#include <fenv.h> /* feraiseexcept, fetestexcept, FE_* */
#include <stdio.h> /* puts */
#pragma STDC FENV_ACCESS on

double fn(double x)
{
    /* some function for which zero is a domain and range error */
    if (x == 0.0)
        feraiseexcept(FE_INVALID | FE_OVERFLOW);
    return x;
}

int main()
{
    int fe;

    feclearexcept(FE_ALL_EXCEPT);
    fn(0.0);

    /* testing for single exception: */
    if (fetestexcept(FE_OVERFLOW))
        puts("FE_OVERFLOW is set");

    /* testing multiple exceptions: */
    fe = fetestexcept(FE_ALL_EXCEPT);

    puts("The following exceptions are set:");
    if (fe & FE_DIVBYZERO)
        puts("FE_DIVBYZERO");
    if (fe & FE_INEXACT)
        puts("FE_INEXACT");
    if (fe & FE_INVALID)
        puts("FE_INVALID");
    if (fe & FE_OVERFLOW)
        puts("FE_OVERFLOW");
    if (fe & FE_UNDERFLOW)
        puts("FE_UNDERFLOW");

    return 0;
}
