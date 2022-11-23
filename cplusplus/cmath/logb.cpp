// cplusplus link https://cplusplus.com/reference/cmath\logb
/* logb example */
#include <math.h> /* logb */
#include <stdio.h> /* printf */

int main()
{
    double param, result;
    param = 1024.0;
    result = logb(param);
    printf("logb (%f) = %f.\n", param, result);
    return 0;
}
