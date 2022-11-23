// cplusplus link https://cplusplus.com/reference/cctype\isupper
/* isupper example */
#include <ctype.h>
#include <stdio.h>
int main()
{
    int i = 0;
    char str[] = "Test String.\n";
    char c;
    while (str[i]) {
        c = str[i];
        if (isupper(c))
            c = tolower(c);
        putchar(c);
        i++;
    }
    return 0;
}
