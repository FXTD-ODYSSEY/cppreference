// cplusplus link https://cplusplus.com/reference/cwchar\wmemcpy
/* wmemcpy example */
#include <wchar.h>

int main()
{
    wchar_t wcs1[] = L"To be or not to be";
    wchar_t wcs2[40];
    wchar_t wcs3[40];

    wcsncpy(wcs2, wcs1, 40); /* copies 19 characters, then fills with L'\0' */
    wmemcpy(wcs3, wcs1, 40); /* copies 40 characters */

    wprintf(L"%ls\n%ls\n%ls\n", wcs1, wcs2, wcs3);

    return 0;
}
