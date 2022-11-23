// cplusplus link https://cplusplus.com/reference/cstdio\vsscanf
/* vsscanf example */
#include <stdarg.h>
#include <stdio.h>

void GetMatches(const char* str, const char* format, ...)
{
    va_list args;
    va_start(args, format);
    vsscanf(str, format, args);
    va_end(args);
}

int main()
{
    int val;
    char buf[100];

    GetMatches("99 bottles of beer on the wall", " %d %s ", &val, buf);

    printf("Product: %s\nQuantity: %d\n", buf, val);

    return 0;
}
