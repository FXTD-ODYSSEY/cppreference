// cplusplus link https://cplusplus.com/reference/cmath\scalbn
/* scalbn example */
#include <float.h> /* FLT_RADIX */
#include <math.h> /* scalbn */
#include <stdio.h> /* printf */

int main()
{
    double param, result;
    int n;

    param = 1.50;
    n = 4;
    result = scalbn(param, n);
    printf("%f * %d^%d = %f\n", param, FLT_RADIX, n, result);
    return 0;
}
