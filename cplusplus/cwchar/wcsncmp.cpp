// cplusplus link https://cplusplus.com/reference/cwchar\wcsncmp
/* wcsncmp example */
#include <stdio.h>
#include <string.h>

int main()
{
    wchar_t wcs[][5] = { L"R2D2", L"C3PO", L"R2A6" };
    int n;
    wprintf(L"Looking for R2 astromech droids...\n");
    for (n = 0; n < 3; n++)
        if (wcsncmp(wcs[n], L"R2xx", 2) == 0) {
            wprintf(L"found %ls\n", wcs[n]);
        }
    return 0;
}
