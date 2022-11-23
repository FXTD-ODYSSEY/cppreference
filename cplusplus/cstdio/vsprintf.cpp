// cplusplus link https://cplusplus.com/reference/cstdio\vsprintf
/* vsprintf example */
#include <stdarg.h>
#include <stdio.h>

void PrintFError(const char* format, ...)
{
    char buffer[256];
    va_list args;
    va_start(args, format);
    vsprintf(buffer, format, args);
    perror(buffer);
    va_end(args);
}

int main()
{
    FILE* pFile;
    char szFileName[] = "myfile.txt";

    pFile = fopen(szFileName, "r");
    if (pFile == NULL)
        PrintFError("Error opening '%s'", szFileName);
    else {
        // file successfully open
        fclose(pFile);
    }
    return 0;
}
