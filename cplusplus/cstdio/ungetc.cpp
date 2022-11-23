// cplusplus link https://cplusplus.com/reference/cstdio\ungetc
/* ungetc example */
#include <stdio.h>

int main()
{
    FILE* pFile;
    int c;
    char buffer[256];

    pFile = fopen("myfile.txt", "rt");
    if (pFile == NULL)
        perror("Error opening file");
    else
        while (!feof(pFile)) {
            c = getc(pFile);
            if (c == EOF)
                break;
            if (c == '#')
                ungetc('@', pFile);
            else
                ungetc(c, pFile);
            if (fgets(buffer, 255, pFile) != NULL)
                fputs(buffer, stdout);
            else
                break;
        }
    return 0;
}
