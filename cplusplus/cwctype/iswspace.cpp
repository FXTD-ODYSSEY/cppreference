// cplusplus link https://cplusplus.com/reference/cwctype\iswspace
/* iswspace example */
#include <stdio.h>
#include <wctype.h>
int main()
{
    wchar_t c;
    int i = 0;
    wchar_t str[] = L"Example sentence to test iswspace\n";
    while (str[i]) {
        c = str[i];
        if (iswspace(c))
            c = L'\n';
        putwchar(c);
        i++;
    }
    return 0;
}
