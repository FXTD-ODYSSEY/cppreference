// cplusplus link https://cplusplus.com/reference/cwchar\wcsncpy
/* wcsncpy example */
#include <wchar.h>

int main()
{
    wchar_t wcs1[] = L"To be or not to be";
    wchar_t wcs2[40];
    wchar_t wcs3[40];

    /* copy to sized buffer (overflow safe): */
    wcsncpy(wcs2, wcs1, 40);

    /* partial copy (only 5 characters): */
    wcsncpy(wcs3, wcs2, 5);
    wcs3[5] = L'\0'; /* null character manually added */

    wprintf(L"%ls\n%ls\n%ls\n", wcs1, wcs2, wcs3);

    return 0;
}
