// cplusplus link https://cplusplus.com/reference/cwchar\wcrtomb
/* wcrtomb example */
#include <stdio.h>
#include <stdlib.h>
#include <wchar.h>

int main()
{
    const wchar_t* pt = L"wcrtomb example";
    char buffer[MB_CUR_MAX];
    size_t length, i;
    mbstate_t mbs;

    mbrlen(NULL, 0, &mbs); /* initialize mbs */

    while (*pt) {
        length = wcrtomb(buffer, *pt, &mbs);
        if ((length == 0) || (length > MB_CUR_MAX))
            break;
        putchar('[');
        for (i = 0; i < length; ++i)
            putchar(buffer[i]);
        putchar(']');
        ++pt;
    }

    return 0;
}
