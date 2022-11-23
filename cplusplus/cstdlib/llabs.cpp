// cplusplus link https://cplusplus.com/reference/cstdlib\llabs
/* llabs example */
#include <stdio.h> /* printf */
#include <stdlib.h> /* llabs */

int main()
{
    long long int n, m;
    n = llabs(31558149LL);
    m = llabs(-100000000LL);
    printf("n=%lld\n", n);
    printf("m=%lld\n", m);
    return 0;
}
