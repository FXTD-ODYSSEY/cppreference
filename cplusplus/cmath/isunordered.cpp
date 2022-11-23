// cplusplus link https://cplusplus.com/reference/cmath\isunordered
/* isunordered example */
#include <math.h> /* isunordered, sqrt */
#include <stdio.h> /* printf */

int main()
{
    double result;
    result = sqrt(-1.0);

    if (isunordered(result, 0.0))
        printf("sqrt(-1.0) and 0.0 cannot be ordered");
    else
        printf("sqrt(-1.0) and 0.0 can be ordered");

    return 0;
}
