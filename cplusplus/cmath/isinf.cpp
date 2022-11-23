// cplusplus link https://cplusplus.com/reference/cmath\isinf
/* isinf example */
#include <math.h> /* isinf, sqrt */
#include <stdio.h> /* printf */

int main()
{
    printf("isinf(0.0)       : %d\n", isinf(0.0));
    printf("isinf(1.0/0.0)   : %d\n", isinf(1.0 / 0.0));
    printf("isinf(-1.0/0.0)  : %d\n", isinf(-1.0 / 0.0));
    printf("isinf(sqrt(-1.0)): %d\n", isinf(sqrt(-1.0)));
    return 0;
}
