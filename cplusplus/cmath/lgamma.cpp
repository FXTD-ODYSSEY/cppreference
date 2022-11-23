// cplusplus link https://cplusplus.com/reference/cmath\lgamma
/* lgamma example */
#include <math.h> /* lgamma */
#include <stdio.h> /* printf */

int main()
{
    double param, result;
    param = 0.5;
    result = lgamma(param);
    printf("lgamma(%f) = %f\n", param, result);
    return 0;
}
