// cplusplus link https://cplusplus.com/reference/cmath\fmax
/* fmax example */
#include <math.h> /* fmax */
#include <stdio.h> /* printf */

int main()
{
    printf("fmax (100.0, 1.0) = %f\n", fmax(100.0, 1.0));
    printf("fmax (-100.0, 1.0) = %f\n", fmax(-100.0, 1.0));
    printf("fmax (-100.0, -1.0) = %f\n", fmax(-100.0, -1.0));
    return 0;
}
