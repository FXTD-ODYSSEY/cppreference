// cplusplus link https://cplusplus.com/reference/cwctype\iswdigit
/* iswdigit example */
#include <stdio.h>
#include <wchar.h>
#include <wctype.h>
int main()
{
    wchar_t str[] = L"1776ad";
    long int year;
    if (iswdigit(str[0])) {
        year = wcstol(str, NULL, 10);
        wprintf(L"The year that followed %ld was %ld.\n", year, year + 1);
    }
    return 0;
}
