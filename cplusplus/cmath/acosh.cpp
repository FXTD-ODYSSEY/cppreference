// cplusplus link https://cplusplus.com/reference/cmath\acosh
/* acosh example */
#include <math.h> /* acosh, exp, sinh */
#include <stdio.h> /* printf */

int main()
{
    double param, result;
    param = exp(2) - sinh(2);
    result = acosh(param);
    printf("The area hyperbolic cosine of %f is %f radians.\n", param, result);
    return 0;
}
