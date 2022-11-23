// cplusplus link https://cplusplus.com/reference/cmath\erfc
/* erfc example */
#include <math.h> /* erfc */
#include <stdio.h> /* printf */

int main()
{
    double param, result;
    param = 1.0;
    result = erfc(param);
    printf("erfc(%f) = %f\n", param, result);
    return 0;
}
