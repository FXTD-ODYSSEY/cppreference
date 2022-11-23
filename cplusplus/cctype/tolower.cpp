// cplusplus link https://cplusplus.com/reference/cctype\tolower
/* tolower example */
#include <ctype.h>
#include <stdio.h>
int main()
{
    int i = 0;
    char str[] = "Test String.\n";
    char c;
    while (str[i]) {
        c = str[i];
        putchar(tolower(c));
        i++;
    }
    return 0;
}
