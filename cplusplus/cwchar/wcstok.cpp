// cplusplus link https://cplusplus.com/reference/cwchar\wcstok
/* wcstok example */
#include <wchar.h>

int main()
{
    wchar_t wcs[] = L"- This, a sample string.";
    wchar_t* pwc;
    wchar_t* pt;
    wprintf(L"Splitting wide string \"%ls\" into tokens:\n", wcs);
    pwc = wcstok(wcs, L" ,.-", &pt);
    while (pwc != NULL) {
        wprintf(L"%ls\n", pwc);
        pwc = wcstok(NULL, L" ,.-", &pt);
    }
    return 0;
}
