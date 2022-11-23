// cplusplus link https://cplusplus.com/reference/cwchar\wcscspn
/* wcscspn example */
#include <wchar.h>

int main()
{
    wchar_t wcs[] = L"fcba73";
    wchar_t keys[] = L"1234567890";
    int i;
    i = wcscspn(wcs, keys);
    wprintf(L"The first number in wcs is at position %d.\n", i + 1);
    return 0;
}
