// cplusplus link https://cplusplus.com/reference/cwchar\mbrlen
/* mbrlen example */
#include <stdio.h>
#include <string.h>
#include <wchar.h>

void splitmb(const char* pt, size_t max)
{
    size_t length;
    wchar_t dest;
    mbstate_t mbs;
    int i;

    mbrlen(NULL, 0, &mbs); /* initialize state */

    while (max > 0) {
        length = mbrlen(pt, max, &mbs);
        if ((length == 0) || (length > max))
            break;
        putchar('[');
        for (i = 0; i < length; ++i)
            putchar(*pt++);
        putchar(']');
        max -= length;
    }
}

int main()
{
    const char str[] = "test string";

    splitmb(str, sizeof(str));

    return 0;
}
