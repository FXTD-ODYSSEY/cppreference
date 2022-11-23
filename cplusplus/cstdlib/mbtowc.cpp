// cplusplus link https://cplusplus.com/reference/cstdlib\mbtowc
/* mbtowc example */
#include <stdio.h> /* printf */
#include <stdlib.h> /* mbtowc, wchar_t(C) */

void printbuffer(const char* pt, size_t max)
{
    int length;
    wchar_t dest;

    mbtowc(NULL, NULL, 0); /* reset mbtowc */

    while (max > 0) {
        length = mbtowc(&dest, pt, max);
        if (length < 1)
            break;
        printf("[%lc]", dest);
        pt += length;
        max -= length;
    }
}

int main()
{
    const char str[] = "mbtowc example";

    printbuffer(str, sizeof(str));

    return 0;
}
