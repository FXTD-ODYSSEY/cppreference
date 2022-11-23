// cplusplus link https://cplusplus.com/reference/cstdio\fputs
/* fputs example */
#include <stdio.h>

int main()
{
    FILE* pFile;
    char sentence[256];

    printf("Enter sentence to append: ");
    fgets(sentence, 256, stdin);
    pFile = fopen("mylog.txt", "a");
    fputs(sentence, pFile);
    fclose(pFile);
    return 0;
}
