// cplusplus link https://cplusplus.com/reference/cwchar\vfwscanf
/* vfwscanf example */
#include <stdarg.h>
#include <stdio.h>
#include <wchar.h>

void ReadWideStuff(FILE* stream, const wchar_t* format, ...)
{
    va_list args;
    va_start(args, format);
    vfwscanf(stream, format, args);
    va_end(args);
}

int main()
{
    FILE* pFile;
    int val;
    wchar_t str[100];

    pFile = fopen("myfile.txt", "r");

    if (pFile != NULL) {
        ReadWideStuff(pFile, L" %ls %d ", str, &val);
        wprintf(L"I have read %ls and %d", str, val);
        fclose(pFile);
    }

    return 0;
}
