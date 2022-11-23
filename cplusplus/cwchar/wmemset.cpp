// cplusplus link https://cplusplus.com/reference/cwchar\wmemset
/* wmemset example */
#include <wchar.h>

int main()
{
    wchar_t wcs[] = L"almost every programmer should know wmemset!";
    wmemset(wcs, L'-', 6);
    wprintf(L"%ls\n", wcs);
    return 0;
}
