// cplusplus link https://cplusplus.com/reference/cctype\isxdigit
/* isxdigit example */
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
int main()
{
    char str[] = "ffff";
    long int number;
    if (isxdigit(str[0])) {
        number = strtol(str, NULL, 16);
        printf("The hexadecimal number %lx is %ld.\n", number, number);
    }
    return 0;
}
