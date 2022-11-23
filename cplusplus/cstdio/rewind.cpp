// cplusplus link https://cplusplus.com/reference/cstdio\rewind
/* rewind example */
#include <stdio.h>

int main()
{
    int n;
    FILE* pFile;
    char buffer[27];

    pFile = fopen("myfile.txt", "w+");
    for (n = 'A'; n <= 'Z'; n++)
        fputc(n, pFile);
    rewind(pFile);
    fread(buffer, 1, 26, pFile);
    fclose(pFile);
    buffer[26] = '\0';
    puts(buffer);
    return 0;
}
