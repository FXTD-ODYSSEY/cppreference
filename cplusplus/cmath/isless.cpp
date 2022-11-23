// cplusplus link https://cplusplus.com/reference/cmath\isless
/* isless example */
#include <math.h> /* isless, log */
#include <stdio.h> /* printf */

int main()
{
    double result;
    result = log(10.0);

    if (isless(result, 0.0))
        printf("log(10.0) is negative");
    else
        printf("log(10.0) is not negative");

    return 0;
}
