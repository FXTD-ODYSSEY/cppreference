// cplusplus link https://cplusplus.com/reference/cwctype\iswxdigit
/* isxdigit example */
#include <stdio.h>
#include <wchar.h>
#include <wctype.h>
int main()
{
    wchar_t str[] = L"ffff";
    long int number;
    if (iswxdigit(str[0])) {
        number = wcstol(str, NULL, 16);
        wprintf(L"The hexadecimal number %lx is %ld.\n", number, number);
    }
    return 0;
}
