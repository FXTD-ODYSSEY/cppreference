// cplusplus link https://cplusplus.com/reference/cmath\signbit
/* signbit example */
#include <math.h> /* signbit, sqrt */
#include <stdio.h> /* printf */

int main()
{
    printf("signbit(0.0)       : %d\n", signbit(0.0));
    printf("signbit(1.0/0.0)   : %d\n", signbit(1.0 / 0.0));
    printf("signbit(-1.0/0.0)  : %d\n", signbit(-1.0 / 0.0));
    printf("signbit(sqrt(-1.0)): %d\n", signbit(sqrt(-1.0)));
    return 0;
}
