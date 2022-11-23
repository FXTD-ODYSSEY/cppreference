// cplusplus link https://cplusplus.com/reference/cstdlib\strtoul
/* strtoul example */
#include <stdio.h> /* printf, NULL */
#include <stdlib.h> /* strtoul */

int main()
{
    char buffer[256];
    unsigned long ul;
    printf("Enter an unsigned number: ");
    fgets(buffer, 256, stdin);
    ul = strtoul(buffer, NULL, 0);
    printf("Value entered: %lu. Its double: %lu\n", ul, ul * 2);
    return 0;
}
