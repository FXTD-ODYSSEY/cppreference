// cplusplus link https://cplusplus.com/reference/cctype\islower
/* islower example */
#include <ctype.h>
#include <stdio.h>
int main()
{
    int i = 0;
    char str[] = "Test String.\n";
    char c;
    while (str[i]) {
        c = str[i];
        if (islower(c))
            c = toupper(c);
        putchar(c);
        i++;
    }
    return 0;
}
