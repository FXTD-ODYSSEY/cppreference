// cplusplus link https://cplusplus.com/reference/cwctype\iswalnum
/* iswalnum example */
#include <stdio.h>
#include <wctype.h>
int main()
{
    int i;
    wchar_t str[] = L"c3po...";
    i = 0;
    while (iswalnum(str[i]))
        i++;
    wprintf(L"The first %d characters are alphanumeric.\n", i);
    return 0;
}
