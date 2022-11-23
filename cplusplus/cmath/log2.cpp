// cplusplus link https://cplusplus.com/reference/cmath\log2
/* log2 example */
#include <math.h> /* log2 */
#include <stdio.h> /* printf */

int main()
{
    double param, result;
    param = 1024.0;
    result = log2(param);
    printf("log2 (%f) = %f.\n", param, result);
    return 0;
}
