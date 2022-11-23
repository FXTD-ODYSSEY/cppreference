// cplusplus link https://cplusplus.com/reference/cctype\isblank
/* isblank example */
#include <ctype.h>
#include <stdio.h>
int main()
{
    char c;
    int i = 0;
    char str[] = "Example sentence to test isblank\n";
    while (str[i]) {
        c = str[i];
        if (isblank(c))
            c = '\n';
        putchar(c);
        i++;
    }
    return 0;
}
