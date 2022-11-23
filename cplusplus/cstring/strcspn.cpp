// cplusplus link https://cplusplus.com/reference/cstring\strcspn
/* strcspn example */
#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "fcba73";
    char keys[] = "1234567890";
    int i;
    i = strcspn(str, keys);
    printf("The first number in str is at position %d.\n", i + 1);
    return 0;
}
