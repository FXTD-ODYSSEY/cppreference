// cplusplus link https://cplusplus.com/reference/cstdlib\mblen
/* mblen example */
#include <stdio.h> /* printf */
#include <stdlib.h> /* mblen, mbtowc, wchar_t(C) */

void printbuffer(const char* pt, size_t max)
{
    int length;
    wchar_t dest;

    mblen(NULL, 0); /* reset mblen */
    mbtowc(NULL, NULL, 0); /* reset mbtowc */

    while (max > 0) {
        length = mblen(pt, max);
        if (length < 1)
            break;
        mbtowc(&dest, pt, length);
        printf("[%lc]", dest);
        pt += length;
        max -= length;
    }
}

int main()
{
    const char str[] = "test string";

    printbuffer(str, sizeof(str));

    return 0;
}
