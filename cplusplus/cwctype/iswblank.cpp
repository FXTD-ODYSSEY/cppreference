// cplusplus link https://cplusplus.com/reference/cwctype\iswblank
/* iswblank example */
#include <stdio.h>
#include <wctype.h>
int main()
{
    wchar_t c;
    int i = 0;
    wchar_t str[] = L"Example sentence to test iswblank\n";
    while (str[i]) {
        c = str[i];
        if (iswblank(c))
            c = L'\n';
        putwchar(c);
        i++;
    }
    return 0;
}
