// cplusplus link https://cplusplus.com/reference/cmath\exp
/* exp example */
#include <math.h> /* exp */
#include <stdio.h> /* printf */

int main()
{
    double param, result;
    param = 5.0;
    result = exp(param);
    printf("The exponential value of %f is %f.\n", param, result);
    return 0;
}
