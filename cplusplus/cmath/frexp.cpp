// cplusplus link https://cplusplus.com/reference/cmath\frexp
/* frexp example */
#include <math.h> /* frexp */
#include <stdio.h> /* printf */

int main()
{
    double param, result;
    int n;

    param = 8.0;
    result = frexp(param, &n);
    printf("%f = %f * 2^%d\n", param, result, n);
    return 0;
}
