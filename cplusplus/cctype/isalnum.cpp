// cplusplus link https://cplusplus.com/reference/cctype\isalnum
/* isalnum example */
#include <ctype.h>
#include <stdio.h>
int main()
{
    int i;
    char str[] = "c3po...";
    i = 0;
    while (isalnum(str[i]))
        i++;
    printf("The first %d characters are alphanumeric.\n", i);
    return 0;
}
