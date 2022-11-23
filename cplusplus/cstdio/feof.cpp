// cplusplus link https://cplusplus.com/reference/cstdio\feof
/* feof example: byte counter */
#include <stdio.h>

int main()
{
    FILE* pFile;
    int n = 0;
    pFile = fopen("myfile.txt", "rb");
    if (pFile == NULL)
        perror("Error opening file");
    else {
        while (fgetc(pFile) != EOF) {
            ++n;
        }
        if (feof(pFile)) {
            puts("End-of-File reached.");
            printf("Total number of bytes read: %d\n", n);
        } else
            puts("End-of-File was not reached.");
        fclose(pFile);
    }
    return 0;
}
