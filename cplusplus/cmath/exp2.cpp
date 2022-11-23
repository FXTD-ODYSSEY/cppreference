// cplusplus link https://cplusplus.com/reference/cmath\exp2
/* exp2 example */
#include <math.h> /* exp2 */
#include <stdio.h> /* printf */

int main()
{
    double param, result;
    param = 8.0;
    result = exp2(param);
    printf("2 ^ %f = %f.\n", param, result);
    return 0;
}
