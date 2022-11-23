// cplusplus link https://cplusplus.com/reference/cmath\isgreaterequal
/* isgreaterequal example */
#include <math.h> /* isgreaterequal, log */
#include <stdio.h> /* printf */

int main()
{
    double result;
    result = log(10.0);

    if (isgreaterequal(result, 0.0))
        printf("log(10.0) is not negative");
    else
        printf("log(10.0) is negative");

    return 0;
}
