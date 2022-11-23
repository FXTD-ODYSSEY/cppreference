// cplusplus link https://cplusplus.com/reference/cmath\log10
/* log10 example */
#include <math.h> /* log10 */
#include <stdio.h> /* printf */

int main()
{
    double param, result;
    param = 1000.0;
    result = log10(param);
    printf("log10(%f) = %f\n", param, result);
    return 0;
}
