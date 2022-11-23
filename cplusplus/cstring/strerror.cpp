// cplusplus link https://cplusplus.com/reference/cstring\strerror
/* strerror example : error list */
#include <errno.h>
#include <stdio.h>
#include <string.h>

int main()
{
    FILE* pFile;
    pFile = fopen("unexist.ent", "r");
    if (pFile == NULL)
        printf("Error opening file unexist.ent: %s\n", strerror(errno));
    return 0;
}
