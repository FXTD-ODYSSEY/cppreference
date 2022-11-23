// cplusplus link https://cplusplus.com/reference/cmath\sinh
/* sinh example */
#include <math.h> /* sinh, log */
#include <stdio.h> /* printf */

int main()
{
    double param, result;
    param = log(2.0);
    result = sinh(param);
    printf("The hyperbolic sine of %f is %f.\n", param, result);
    return 0;
}
