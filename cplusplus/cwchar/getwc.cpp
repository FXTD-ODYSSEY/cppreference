// cplusplus link https://cplusplus.com/reference/cwchar\getwc
/* getwc example */
#include <stdio.h>
#include <wchar.h>

int main()
{
    FILE* pFile;
    wint_t wc;
    int n = 0;
    pFile = fopen("myfile.txt", "r");
    if (pFile != NULL) {
        do {
            wc = getwc(pFile);
            if (wc == L'$')
                n++;
        } while (wc != WEOF);
        fclose(pFile);
        wprintf(L"The file contains %d dollar sign characters ($).\n", n);
    }
    return 0;
}
