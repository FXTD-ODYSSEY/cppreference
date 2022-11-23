// cplusplus link https://cplusplus.com/reference/cstring\strncmp
/* strncmp example */
#include <stdio.h>
#include <string.h>

int main()
{
    char str[][5] = { "R2D2", "C3PO", "R2A6" };
    int n;
    puts("Looking for R2 astromech droids...");
    for (n = 0; n < 3; n++)
        if (strncmp(str[n], "R2xx", 2) == 0) {
            printf("found %s\n", str[n]);
        }
    return 0;
}
