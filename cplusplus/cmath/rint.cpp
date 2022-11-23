// cplusplus link https://cplusplus.com/reference/cmath\rint
/* rint example */
#include <fenv.h> /* fegetround, FE_* */
#include <math.h> /* rint */
#include <stdio.h> /* printf */

int main()
{
    printf("rounding using ");
    switch (fegetround()) {
    case FE_DOWNWARD:
        printf("downward");
        break;
    case FE_TONEAREST:
        printf("to-nearest");
        break;
    case FE_TOWARDZERO:
        printf("toward-zero");
        break;
    case FE_UPWARD:
        printf("upward");
        break;
    default:
        printf("unknown");
    }
    printf(" rounding:\n");

    printf("rint (2.3) = %.1f\n", rint(2.3));
    printf("rint (3.8) = %.1f\n", rint(3.8));
    printf("rint (-2.3) = %.1f\n", rint(-2.3));
    printf("rint (-3.8) = %.1f\n", rint(-3.8));
    return 0;
}
