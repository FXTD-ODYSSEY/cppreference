// cplusplus link https://cplusplus.com/reference/cwchar\wcscat
/* wcscat example */
#include <wchar.h>

int main()
{
    wchar_t wcs[80];
    wcscpy(wcs, L"these ");
    wcscat(wcs, L"wide strings ");
    wcscat(wcs, L"are ");
    wcscat(wcs, L"concatenated.");
    wprintf(L"%ls\n", wcs);
    return 0;
}
