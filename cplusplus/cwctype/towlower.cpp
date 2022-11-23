// cplusplus link https://cplusplus.com/reference/cwctype\towlower
/* towlower example */
#include <stdio.h>
#include <wctype.h>
int main()
{
    int i = 0;
    wchar_t str[] = L"Test String.\n";
    wchar_t c;
    while (str[i]) {
        c = str[i];
        putwchar(towlower(c));
        i++;
    }
    return 0;
}
