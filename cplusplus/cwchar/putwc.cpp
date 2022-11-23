// cplusplus link https://cplusplus.com/reference/cwchar\putwc
/* fputwc example */
#include <stdio.h>

int main()
{
    FILE* pFile;
    wchar_t wc;

    pFile = fopen("example.txt", "w");
    if (pFile != NULL) {

        for (wc = L'A'; wc <= L'Z'; ++wc)
            putwc(wc, pFile);

        fclose(pFile);
    }
    return 0;
}
