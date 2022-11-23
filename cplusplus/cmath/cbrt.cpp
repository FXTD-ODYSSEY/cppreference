// cplusplus link https://cplusplus.com/reference/cmath\cbrt
/* cbrt example */
#include <math.h> /* cbrt */
#include <stdio.h> /* printf */

int main()
{
    double param, result;
    param = 27.0;
    result = cbrt(param);
    printf("cbrt (%f) = %f\n", param, result);
    return 0;
}
