// cplusplus link https://cplusplus.com/reference/cwchar\wcsncat
/* wcsncat example */
#include <wchar.h>

int main()
{
    wchar_t wcs1[20];
    wchar_t wcs2[20];
    wcscpy(wcs1, L"To be ");
    wcscpy(wcs2, L"or not to be");
    wcsncat(wcs1, wcs2, 6);
    wprintf(L"%ls\n", wcs1);
    return 0;
}
