// cplusplus link https://cplusplus.com/reference/cwchar\wcsstr
/* wcsstr example */
#include <wchar.h>

int main()
{
    wchar_t wcs[] = L"This is a simple string";
    wchar_t* pwc;
    pwc = wcsstr(wcs, L"simple");
    wcsncpy(pwc, L"sample", 6);
    wprintf(L"%ls\n", wcs);
    return 0;
}
