// cplusplus link https://cplusplus.com/reference/cwchar\wcscpy
/* wcscpy example */
#include <wchar.h>

int main()
{
    wchar_t wcs1[] = L"Sample string";
    wchar_t wcs2[40];
    wchar_t wcs3[40];
    wcscpy(wcs2, wcs1);
    wcscpy(wcs3, L"copy successful");
    wprintf(L"str1: %ls\nstr2: %ls\nstr3: %ls\n", wcs1, wcs2, wcs3);
    return 0;
}
