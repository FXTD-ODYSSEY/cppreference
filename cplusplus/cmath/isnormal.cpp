// cplusplus link https://cplusplus.com/reference/cmath\isnormal
/* isnormal example */
#include <math.h> /* isnormal */
#include <stdio.h> /* printf */

int main()
{
    printf("isnormal(1.0)    : %d\n", isnormal(1.0));
    printf("isnormal(0.0)    : %d\n", isnormal(0.0));
    printf("isnormal(1.0/0.0): %d\n", isnormal(1.0 / 0.0));
    return 0;
}
