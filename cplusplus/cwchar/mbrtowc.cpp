// cplusplus link https://cplusplus.com/reference/cwchar\mbrtowc
/* mbrtowc example */
#include <wchar.h>

void printbuffer(const char* pt, size_t max)
{
    size_t length;
    wchar_t dest;
    mbstate_t mbs;

    mbrlen(NULL, 0, &mbs); /* initialize mbs */

    while (max > 0) {
        length = mbrtowc(&dest, pt, max, &mbs);
        if ((length == 0) || (length > max))
            break;
        wprintf(L"[%lc]", dest);
        pt += length;
        max -= length;
    }
}

int main()
{
    const char str[] = "mbrtowc example";

    printbuffer(str, sizeof(str));

    return 0;
}
