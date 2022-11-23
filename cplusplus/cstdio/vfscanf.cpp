// cplusplus link https://cplusplus.com/reference/cstdio\vfscanf
/* vfscanf example */
#include <stdarg.h>
#include <stdio.h>

void ReadStuff(FILE* stream, const char* format, ...)
{
    va_list args;
    va_start(args, format);
    vfscanf(stream, format, args);
    va_end(args);
}

int main()
{
    FILE* pFile;
    int val;
    char str[100];

    pFile = fopen("myfile.txt", "r");

    if (pFile != NULL) {
        ReadStuff(pFile, " %s %d ", str, &val);
        printf("I have read %s and %d", str, val);
        fclose(pFile);
    }

    return 0;
}
