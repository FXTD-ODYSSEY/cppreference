// cplusplus link https://cplusplus.com/reference/cstdarg\va_end
/* va_end example */
#include <stdarg.h> /* va_list, va_start, va_arg, va_end */
#include <stdio.h> /* puts */

void PrintLines(char* first, ...)
{
    char* str;
    va_list vl;

    str = first;

    va_start(vl, first);

    do {
        puts(str);
        str = va_arg(vl, char*);
    } while (str != NULL);

    va_end(vl);
}

int main()
{
    PrintLines("First", "Second", "Third", "Fourth", NULL);
    return 0;
}
