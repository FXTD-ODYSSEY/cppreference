// cplusplus link https://cplusplus.com/reference/cwchar\vfwprintf
/* vfprintf example */
#include <stdarg.h>
#include <stdio.h>
#include <wchar.h>

void WriteWideFormatted(FILE* stream, const wchar_t* format, ...)
{
    va_list args;
    va_start(args, format);
    vfwprintf(stream, format, args);
    va_end(args);
}

int main()
{
    FILE* pFile;

    pFile = fopen("myfile.txt", "w");

    WriteWideFormatted(pFile, L"Call with %d variable argument.\n", 1);
    WriteWideFormatted(pFile, L"Call with %d variable %ls.\n", 2, L"arguments");

    fclose(pFile);

    return 0;
}
