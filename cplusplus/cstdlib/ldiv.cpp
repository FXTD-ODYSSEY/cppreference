// cplusplus link https://cplusplus.com/reference/cstdlib\ldiv
/* ldiv example */
#include <stdio.h> /* printf */
#include <stdlib.h> /* ldiv, ldiv_t */

int main()
{
    ldiv_t ldivresult;
    ldivresult = ldiv(1000000L, 132L);
    printf("1000000 div 132 => %ld, remainder %ld.\n", ldivresult.quot, ldivresult.rem);
    return 0;
}
