// cplusplus link https://cplusplus.com/reference/cwchar\wmemmove
/* wmemmove example */
#include <wchar.h>

int main()
{
    wchar_t wcs[] = L"wmemmove can be very useful......";
    wmemmove(wcs + 21, wcs + 16, 11);
    wprintf(L"%ls\n", wcs);
    return 0;
}
