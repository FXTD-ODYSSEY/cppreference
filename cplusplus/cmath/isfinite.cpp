// cplusplus link https://cplusplus.com/reference/cmath\isfinite
/* isfinite example */
#include <math.h> /* isfinite, sqrt */
#include <stdio.h> /* printf */

int main()
{
    printf("isfinite(0.0)       : %d\n", isfinite(0.0));
    printf("isfinite(1.0/0.0)   : %d\n", isfinite(1.0 / 0.0));
    printf("isfinite(-1.0/0.0)  : %d\n", isfinite(-1.0 / 0.0));
    printf("isfinite(sqrt(-1.0)): %d\n", isfinite(sqrt(-1.0)));
    return 0;
}
