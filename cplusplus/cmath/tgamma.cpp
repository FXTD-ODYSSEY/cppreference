// cplusplus link https://cplusplus.com/reference/cmath\tgamma
/* tgamma example */
#include <math.h> /* tgamma */
#include <stdio.h> /* printf */

int main()
{
    double param, result;
    param = 0.5;
    result = tgamma(param);
    printf("tgamma(%f) = %f\n", param, result);
    return 0;
}
