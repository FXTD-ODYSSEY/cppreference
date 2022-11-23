// cplusplus link https://cplusplus.com/reference/cmath\islessgreater
/* islessgreater example */
#include <math.h> /* islessgreater, log */
#include <stdio.h> /* printf */

int main()
{
    double result;
    result = log(10.0);

    if (islessgreater(result, 0.0))
        printf("log(10.0) is not zero");
    else
        printf("log(10.0) is zero");

    return 0;
}
