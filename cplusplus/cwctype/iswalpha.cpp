// cplusplus link https://cplusplus.com/reference/cwctype\iswalpha
/* iswalpha example */
#include <stdio.h>
#include <wctype.h>
int main()
{
    int i = 0;
    wchar_t str[] = L"C++";
    while (str[i]) {
        if (iswalpha(str[i]))
            wprintf(L"character %lc is alphabetic\n", str[i]);
        else
            wprintf(L"character %lc is not alphabetic\n", str[i]);
        i++;
    }
    return 0;
}
