// cplusplus link https://cplusplus.com/reference/cmath\atan
/* atan example */
#include <math.h> /* atan */
#include <stdio.h> /* printf */

#define PI 3.14159265

int main()
{
    double param, result;
    param = 1.0;
    result = atan(param) * 180 / PI;
    printf("The arc tangent of %f is %f degrees\n", param, result);
    return 0;
}
