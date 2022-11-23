// cplusplus link https://cplusplus.com/reference/cwchar\wcsspn
/* wcsspn example */
#include <wchar.h>

int main()
{
    int i;
    wchar_t wcsText[] = L"129th";
    wchar_t wcsSet[] = L"1234567890";

    i = wcsspn(wcsText, wcsSet);
    wprintf(L"The initial number has %d digits.\n", i);
    return 0;
}
