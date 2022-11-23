// cplusplus link https://cplusplus.com/reference/cwchar\fwide
/* fwide example */
#include <stdio.h>
#include <wchar.h>

int main()
{
    FILE* pFile;
    int ret;

    pFile = fopen("myfile.txt", "a");
    if (pFile) {
        fwide(pFile, 1);
        ret = fwide(pFile, 0);
        if (ret > 0)
            puts("The stream is wide-oriented");
        else if (ret < 0)
            puts("The stream is byte-oriented");
        else
            puts("The stream is not oriented");
        fclose(pFile);
    }
    return 0;
}
