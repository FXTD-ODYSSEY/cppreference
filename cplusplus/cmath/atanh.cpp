// cplusplus link https://cplusplus.com/reference/cmath\atanh
/* atanh example */
#include <math.h> /* tanh, atanh */
#include <stdio.h> /* printf */

int main()
{
    double param, result;
    param = tanh(1);
    result = atanh(param);
    printf("The area hyperbolic tangent of %f is %f.\n", param, result);
    return 0;
}
