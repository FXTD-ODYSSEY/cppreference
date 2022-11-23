// cplusplus link https://cplusplus.com/reference/cctype\isspace
/* isspace example */
#include <ctype.h>
#include <stdio.h>
int main()
{
    char c;
    int i = 0;
    char str[] = "Example sentence to test isspace\n";
    while (str[i]) {
        c = str[i];
        if (isspace(c))
            c = '\n';
        putchar(c);
        i++;
    }
    return 0;
}
