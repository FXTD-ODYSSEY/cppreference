// cplusplus link https://cplusplus.com/reference/cmath\modf
/* modf example */
#include <math.h> /* modf */
#include <stdio.h> /* printf */

int main()
{
    double param, fractpart, intpart;

    param = 3.14159265;
    fractpart = modf(param, &intpart);
    printf("%f = %f + %f \n", param, intpart, fractpart);
    return 0;
}
