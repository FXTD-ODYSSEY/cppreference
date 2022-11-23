// cplusplus link https://cplusplus.com/reference/cmath\ilogb
/* ilogb example */
#include <math.h> /* ilogb */
#include <stdio.h> /* printf */

int main()
{
    double param;
    int result;

    param = 10.0;
    result = ilogb(param);
    printf("ilogb(%f) = %d\n", param, result);
    return 0;
}
