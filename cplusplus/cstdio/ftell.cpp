// cplusplus link https://cplusplus.com/reference/cstdio\ftell
/* ftell example : getting size of a file */
#include <stdio.h>

int main()
{
    FILE* pFile;
    long size;

    pFile = fopen("myfile.txt", "rb");
    if (pFile == NULL)
        perror("Error opening file");
    else {
        fseek(pFile, 0, SEEK_END); // non-portable
        size = ftell(pFile);
        fclose(pFile);
        printf("Size of myfile.txt: %ld bytes.\n", size);
    }
    return 0;
}
