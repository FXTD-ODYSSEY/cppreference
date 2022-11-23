// cplusplus link https://cplusplus.com/reference/cmath\tanh
/* tanh example */
#include <math.h> /* tanh, log */
#include <stdio.h> /* printf */

int main()
{
    double param, result;
    param = log(2.0);
    result = tanh(param);
    printf("The hyperbolic tangent of %f is %f.\n", param, result);
    return 0;
}
