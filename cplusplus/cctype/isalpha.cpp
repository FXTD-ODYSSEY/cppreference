// cplusplus link https://cplusplus.com/reference/cctype\isalpha
/* isalpha example */
#include <ctype.h>
#include <stdio.h>
int main()
{
    int i = 0;
    char str[] = "C++";
    while (str[i]) {
        if (isalpha(str[i]))
            printf("character %c is alphabetic\n", str[i]);
        else
            printf("character %c is not alphabetic\n", str[i]);
        i++;
    }
    return 0;
}
