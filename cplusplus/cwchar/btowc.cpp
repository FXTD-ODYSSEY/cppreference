// cplusplus link https://cplusplus.com/reference/cwchar\btowc
/* btowc example */
#include <wchar.h>

int main()
{
    int i, num;
    const char mbs[] = "btowc example";

    num = 0;
    for (i = 0; i < sizeof(mbs); ++i)
        if (btowc(mbs[i]) != WEOF)
            ++num;

    wprintf(L"mbs contains %d single-byte characters.\n", num);

    return 0;
}
