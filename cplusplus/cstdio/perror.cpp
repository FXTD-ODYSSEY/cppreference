// cplusplus link https://cplusplus.com/reference/cstdio\perror
/* perror example */
#include <stdio.h>

int main()
{
    FILE* pFile;
    pFile = fopen("unexist.ent", "rb");
    if (pFile == NULL)
        perror("The following error occurred");
    else
        fclose(pFile);
    return 0;
}
