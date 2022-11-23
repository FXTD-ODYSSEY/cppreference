// cplusplus link https://cplusplus.com/reference/cmath\fmin
/* fmin example */
#include <math.h> /* fmin */
#include <stdio.h> /* printf */

int main()
{
    printf("fmin (100.0, 1.0) = %f\n", fmin(100.0, 1.0));
    printf("fmin (-100.0, 1.0) = %f\n", fmin(-100.0, 1.0));
    printf("fmin (-100.0, -1.0) = %f\n", fmin(-100.0, -1.0));
    return 0;
}
