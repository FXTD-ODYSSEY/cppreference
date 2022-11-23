// cplusplus link https://cplusplus.com/reference/cstring\strrchr
/* strrchr example */
#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "This is a sample string";
    char* pch;
    pch = strrchr(str, 's');
    printf("Last occurence of 's' found at %d \n", pch - str + 1);
    return 0;
}
