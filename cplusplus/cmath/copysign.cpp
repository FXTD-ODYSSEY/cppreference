// cplusplus link https://cplusplus.com/reference/cmath\copysign
/* copysign example */
#include <math.h> /* copysign */
#include <stdio.h> /* printf */

int main()
{
    printf("copysign ( 10.0,-1.0) = %f\n", copysign(10.0, -1.0));
    printf("copysign (-10.0,-1.0) = %f\n", copysign(-10.0, -1.0));
    printf("copysign (-10.0, 1.0) = %f\n", copysign(-10.0, 1.0));

    return 0;
}
