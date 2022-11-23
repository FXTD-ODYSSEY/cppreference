// cplusplus link https://cplusplus.com/reference/cwchar\wmemcmp
/* wmemcmp example */
#include <wchar.h>

int main()
{
    int a, b;
    wchar_t wcs1[20] = L"content by default.";
    wchar_t wcs2[20] = L"-------------------";

    wcscpy(wcs1, L"test string");
    wcscpy(wcs2, L"test string");

    a = wcsncmp(wcs1, wcs2, 20); /* compares 12 characters (until L'\0') */
    b = wmemcmp(wcs1, wcs2, 20); /* compares 20 characters */

    wprintf(L"wcsncmp comparison: %ls\n", a ? L"not equal" : L"equal");
    wprintf(L"wmemcmp comparison: %ls\n", b ? L"not equal" : L"equal");

    return 0;
}
