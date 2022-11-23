// cplusplus link https://cplusplus.com/reference/cmath\atan2
/* atan2 example */
#include <math.h> /* atan2 */
#include <stdio.h> /* printf */

#define PI 3.14159265

int main()
{
    double x, y, result;
    x = -10.0;
    y = 10.0;
    result = atan2(y, x) * 180 / PI;
    printf("The arc tangent for (x=%f, y=%f) is %f degrees\n", x, y, result);
    return 0;
}
