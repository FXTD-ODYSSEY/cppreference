// cplusplus link https://cplusplus.com/reference/cstdlib\lldiv
/* lldiv example */
#include <stdio.h> /* printf */
#include <stdlib.h> /* lldiv, lldiv_t */

int main()
{
    lldiv_t res;
    res = lldiv(31558149LL, 3600LL);
    printf("Earth orbit: %lld hours and %lld seconds.\n", res.quot, res.rem);
    return 0;
}
