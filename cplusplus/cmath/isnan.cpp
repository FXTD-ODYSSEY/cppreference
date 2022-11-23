// cplusplus link https://cplusplus.com/reference/cmath\isnan
/* isnan example */
#include <math.h> /* isnan, sqrt */
#include <stdio.h> /* printf */

int main()
{
    printf("isnan(0.0)       : %d\n", isnan(0.0));
    printf("isnan(1.0/0.0)   : %d\n", isnan(1.0 / 0.0));
    printf("isnan(-1.0/0.0)  : %d\n", isnan(-1.0 / 0.0));
    printf("isnan(sqrt(-1.0)): %d\n", isnan(sqrt(-1.0)));
    return 0;
}
