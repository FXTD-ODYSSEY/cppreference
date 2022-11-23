// cplusplus link https://cplusplus.com/reference/cstdio\vfprintf
/* vfprintf example */
#include <stdarg.h>
#include <stdio.h>

void WriteFormatted(FILE* stream, const char* format, ...)
{
    va_list args;
    va_start(args, format);
    vfprintf(stream, format, args);
    va_end(args);
}

int main()
{
    FILE* pFile;

    pFile = fopen("myfile.txt", "w");

    WriteFormatted(pFile, "Call with %d variable argument.\n", 1);
    WriteFormatted(pFile, "Call with %d variable %s.\n", 2, "arguments");

    fclose(pFile);

    return 0;
}
