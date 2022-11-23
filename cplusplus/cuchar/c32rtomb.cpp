// cplusplus link https://cplusplus.com/reference/cuchar\c32rtomb
/* c32rtomb example */
#include <stdio.h>
#include <stdlib.h>
#include <uchar.h>
#include <wchar.h>

int main()
{
    const char32_t* pt = U"Juan Souli\u00e9";
    char buffer[MB_CUR_MAX];
    int i;
    size_t length;
    mbstate_t mbs;

    mbrlen(NULL, 0, &mbs); /* initialize mbs */

    while (*pt) {
        length = c32rtomb(buffer, *pt, &mbs);
        if ((length == 0) || (length > MB_CUR_MAX))
            break;
        for (i = 0; i < length; ++i)
            putchar(buffer[i]);
        ++pt;
    }

    return 0;
}
