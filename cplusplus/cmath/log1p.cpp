// cplusplus link https://cplusplus.com/reference/cmath\log1p
/* log1p example */
#include <math.h> /* log1p */
#include <stdio.h> /* printf */

int main()
{
    double param, result;
    param = 1.0;
    result = log1p(param);
    printf("log1p (%f) = %f.\n", param, result);
    return 0;
}
