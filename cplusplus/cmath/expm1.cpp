// cplusplus link https://cplusplus.com/reference/cmath\expm1
/* expm1 example */
#include <math.h> /* expm1 */
#include <stdio.h> /* printf */

int main()
{
    double param, result;
    param = 1.0;
    result = expm1(param);
    printf("expm1 (%f) = %f.\n", param, result);
    return 0;
}
