// cplusplus link https://cplusplus.com/reference/cmath\erf
/* erf example */
#include <math.h> /* erf */
#include <stdio.h> /* printf */

int main()
{
    double param, result;
    param = 1.0;
    result = erf(param);
    printf("erf (%f) = %f\n", param, result);
    return 0;
}
