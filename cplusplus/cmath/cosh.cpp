// cplusplus link https://cplusplus.com/reference/cmath\cosh
/* cosh example */
#include <math.h> /* cosh, log */
#include <stdio.h> /* printf */

int main()
{
    double param, result;
    param = log(2.0);
    result = cosh(param);
    printf("The hyperbolic cosine of %f is %f.\n", param, result);
    return 0;
}
