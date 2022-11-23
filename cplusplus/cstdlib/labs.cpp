// cplusplus link https://cplusplus.com/reference/cstdlib\labs
/* labs example */
#include <stdio.h> /* printf */
#include <stdlib.h> /* labs */

int main()
{
    long int n, m;
    n = labs(65537L);
    m = labs(-100000L);
    printf("n=%ld\n", n);
    printf("m=%ld\n", m);
    return 0;
}
