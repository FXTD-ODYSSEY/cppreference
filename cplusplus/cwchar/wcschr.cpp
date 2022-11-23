// cplusplus link https://cplusplus.com/reference/cwchar\wcschr
/* wcschr example */
#include <wchar.h>

int main()
{
    wchar_t wcs[] = L"This is a sample wide string";
    wchar_t* pwc;
    wprintf(L"Looking for the 's' character in \"%ls\"...\n", wcs);
    pwc = wcschr(wcs, L's');
    while (pwc != NULL) {
        wprintf(L"found at %d\n", pwc - wcs + 1);
        pwc = wcschr(pwc + 1, L's');
    }
    return 0;
}
