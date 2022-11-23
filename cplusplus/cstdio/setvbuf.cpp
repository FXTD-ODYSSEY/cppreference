// cplusplus link https://cplusplus.com/reference/cstdio\setvbuf
/* setvbuf example */
#include <stdio.h>

int main()
{
    FILE* pFile;

    pFile = fopen("myfile.txt", "w");

    setvbuf(pFile, NULL, _IOFBF, 1024);

    // File operations here

    fclose(pFile);

    return 0;
}
