// cplusplus link https://cplusplus.com/reference/cwchar\fputws
/* fputws example */
#include <stdio.h>

int main()
{
    FILE* pFile;
    wchar_t sentence[256];

    wprintf(L"Enter sentence to append: ");
    fgetws(sentence, 255, stdin);
    pFile = fopen("mylog.txt", "a");
    fputws(sentence, pFile);
    fclose(pFile);
    return 0;
}
