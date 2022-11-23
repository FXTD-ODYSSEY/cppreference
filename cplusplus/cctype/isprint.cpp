// cplusplus link https://cplusplus.com/reference/cctype\isprint
/* isprint example */
#include <ctype.h>
#include <stdio.h>
int main()
{
    int i = 0;
    char str[] = "first line \n second line \n";
    while (isprint(str[i])) {
        putchar(str[i]);
        i++;
    }
    return 0;
}
