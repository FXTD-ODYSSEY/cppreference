// cplusplus link https://cplusplus.com/reference/cctype\toupper
/* toupper example */
#include <ctype.h>
#include <stdio.h>
int main()
{
    int i = 0;
    char str[] = "Test String.\n";
    char c;
    while (str[i]) {
        c = str[i];
        putchar(toupper(c));
        i++;
    }
    return 0;
}
