// cplusplus link https://cplusplus.com/reference/cmath\sqrt
/* sqrt example */
#include <math.h> /* sqrt */
#include <stdio.h> /* printf */

int main()
{
    double param, result;
    param = 1024.0;
    result = sqrt(param);
    printf("sqrt(%f) = %f\n", param, result);
    return 0;
}
