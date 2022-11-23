// cplusplus link https://cplusplus.com/reference/cmath\fma
/* fma example */
#include <math.h> /* fma, FP_FAST_FMA */
#include <stdio.h> /* printf */

int main()
{
    double x, y, z, result;
    x = 10.0, y = 20.0, z = 30.0;

#ifdef FP_FAST_FMA
    result = fma(x, y, z);
#else
    result = x * y + z;
#endif

    printf("10.0 * 20.0 + 30.0 = %f\n", result);
    return 0;
}
