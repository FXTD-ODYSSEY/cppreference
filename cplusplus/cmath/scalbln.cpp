// cplusplus link https://cplusplus.com/reference/cmath\scalbln
/* scalbln example */
#include <float.h> /* FLT_RADIX */
#include <math.h> /* scalbn */
#include <stdio.h> /* printf */

int main()
{
    double param, result;
    long n;

    param = 1.50;
    n = 4L;
    result = scalbln(param, n);
    printf("%f * %d^%d = %f\n", param, FLT_RADIX, n, result);
    return 0;
}
