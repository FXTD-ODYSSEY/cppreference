// cplusplus link https://cplusplus.com/reference/cwctype\iswgraph
/* iswgraph example */
#include <stdio.h>
#include <wctype.h>
int main()
{
    FILE* pFile;
    wint_t c;
    pFile = fopen("myfile.txt", "r");
    if (pFile) {
        do {
            c = fgetwc(pFile);
            if (iswgraph(c))
                putwchar(c);
        } while (c != WEOF);
        fclose(pFile);
    }
}
