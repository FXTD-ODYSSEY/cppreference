// cplusplus link https://cplusplus.com/reference/cmath\isgreater
/* isgreater example */
#include <math.h> /* isgreater, log */
#include <stdio.h> /* printf */

int main()
{
    double result;
    result = log(10.0);

    if (isgreater(result, 0.0))
        printf("log(10.0) is positive");
    else
        printf("log(10.0) is not positive");

    return 0;
}
