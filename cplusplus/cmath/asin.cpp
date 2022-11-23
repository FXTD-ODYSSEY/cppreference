// cplusplus link https://cplusplus.com/reference/cmath\asin
/* asin example */
#include <math.h> /* asin */
#include <stdio.h> /* printf */

#define PI 3.14159265

int main()
{
    double param, result;
    param = 0.5;
    result = asin(param) * 180.0 / PI;
    printf("The arc sine of %f is %f degrees\n", param, result);
    return 0;
}
