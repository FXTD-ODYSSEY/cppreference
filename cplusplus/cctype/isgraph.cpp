// cplusplus link https://cplusplus.com/reference/cctype\isgraph
/* isgraph example */
#include <ctype.h>
#include <stdio.h>
int main()
{
    FILE* pFile;
    int c;
    pFile = fopen("myfile.txt", "r");
    if (pFile) {
        do {
            c = fgetc(pFile);
            if (isgraph(c))
                putchar(c);
        } while (c != EOF);
        fclose(pFile);
    }
}
