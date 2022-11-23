// cplusplus link https://cplusplus.com/reference/cmath\acos
/* acos example */
#include <math.h> /* acos */
#include <stdio.h> /* printf */

#define PI 3.14159265

int main()
{
    double param, result;
    param = 0.5;
    result = acos(param) * 180.0 / PI;
    printf("The arc cosine of %f is %f degrees.\n", param, result);
    return 0;
}
