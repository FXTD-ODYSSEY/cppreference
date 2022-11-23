// cplusplus link https://cplusplus.com/reference/cmath\hypot
/* hypot example */
#include <math.h> /* hypot */
#include <stdio.h> /* printf */

int main()
{
    double leg_x, leg_y, result;
    leg_x = 3;
    leg_y = 4;
    result = hypot(leg_x, leg_y);
    printf("%f, %f and %f form a right-angled triangle.\n", leg_x, leg_y, result);
    return 0;
}
