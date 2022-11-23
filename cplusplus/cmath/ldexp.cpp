// cplusplus link https://cplusplus.com/reference/cmath\ldexp
/* ldexp example */
#include <math.h> /* ldexp */
#include <stdio.h> /* printf */

int main()
{
    double param, result;
    int n;

    param = 0.95;
    n = 4;
    result = ldexp(param, n);
    printf("%f * 2^%d = %f\n", param, n, result);
    return 0;
}
