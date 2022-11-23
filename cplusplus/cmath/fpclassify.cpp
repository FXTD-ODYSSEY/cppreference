// cplusplus link https://cplusplus.com/reference/cmath\fpclassify
/* fpclassify example */
#include <math.h> /* fpclassify, signbit, FP_* */
#include <stdio.h> /* printf */

int main()
{
    double d = 1.0 / 0.0;
    switch (fpclassify(d)) {
    case FP_INFINITE:
        printf("infinite");
        break;
    case FP_NAN:
        printf("NaN");
        break;
    case FP_ZERO:
        printf("zero");
        break;
    case FP_SUBNORMAL:
        printf("subnormal");
        break;
    case FP_NORMAL:
        printf("normal");
        break;
    }
    if (signbit(d))
        printf(" negative\n");
    else
        printf(" positive or unsigned\n");
    return 0;
}
