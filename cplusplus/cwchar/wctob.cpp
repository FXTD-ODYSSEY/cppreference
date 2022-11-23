// cplusplus link https://cplusplus.com/reference/cwchar\wctob
/* wctob example */
#include <stdio.h>
#include <wchar.h>

int main()
{
    int i, num;
    const wchar_t wcs[] = L"wctob example";

    num = 0;
    for (i = 0; i < wcslen(wcs); ++i)
        if (wctob(wcs[i]) != EOF)
            ++num;

    wprintf(L"wcs contains %d characters that translate to single-byte characters.", num);

    return 0;
}
