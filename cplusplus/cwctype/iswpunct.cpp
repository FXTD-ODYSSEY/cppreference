// cplusplus link https://cplusplus.com/reference/cwctype\iswpunct
/* iswpunct example */
#include <stdio.h>
#include <wctype.h>
int main()
{
    int i = 0;
    int cx = 0;
    wchar_t str[] = L"Hello, welcome!";
    while (str[i]) {
        if (iswpunct(str[i]))
            cx++;
        i++;
    }
    wprintf(L"The sentence contains %d punctuation characters.\n", cx);
    return 0;
}
