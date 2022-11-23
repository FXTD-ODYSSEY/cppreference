// cplusplus link https://cplusplus.com/reference/cmath\fdim
/* fdim example */
#include <math.h> /* fdim */
#include <stdio.h> /* printf */

int main()
{
    printf("fdim (2.0, 1.0) = %f\n", fdim(2.0, 1.0));
    printf("fdim (1.0, 2.0) = %f\n", fdim(1.0, 2.0));
    printf("fdim (-2.0, -1.0) = %f\n", fdim(-2.0, -1.0));
    printf("fdim (-1.0, -2.0) = %f\n", fdim(-1.0, -2.0));
    return 0;
}
