// cplusplus link https://cplusplus.com/reference/cmath\tan
/* tan example */
#include <math.h> /* tan */
#include <stdio.h> /* printf */

#define PI 3.14159265

int main()
{
    double param, result;
    param = 45.0;
    result = tan(param * PI / 180.0);
    printf("The tangent of %f degrees is %f.\n", param, result);
    return 0;
}
