// cplusplus link https://cplusplus.com/reference/cstdlib\wctomb
/* wctomb example */
#include <stdio.h> /* printf */
#include <stdlib.h> /* wctomb, wchar_t(C) */

int main()
{
    const wchar_t str[] = L"wctomb example";
    const wchar_t* pt;
    char buffer[MB_CUR_MAX];
    int i, length;

    pt = str;
    while (*pt) {
        length = wctomb(buffer, *pt);
        if (length < 1)
            break;
        for (i = 0; i < length; ++i)
            printf("[%c]", buffer[i]);
        ++pt;
    }

    return 0;
}
