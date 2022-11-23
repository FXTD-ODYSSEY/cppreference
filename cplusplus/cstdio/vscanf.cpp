// cplusplus link https://cplusplus.com/reference/cstdio\vscanf
/* vscanf example */
#include <stdarg.h>
#include <stdio.h>

void GetMatches(const char* format, ...)
{
    va_list args;
    va_start(args, format);
    vscanf(format, args);
    va_end(args);
}

int main()
{
    int val;
    char str[100];

    printf("Please enter a number and a word: ");
    fflush(stdout);
    GetMatches(" %d %99s ", &val, str);
    printf("Number read: %d\nWord read: %s\n", val, str);

    return 0;
}
