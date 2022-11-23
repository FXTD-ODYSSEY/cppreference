// cplusplus link https://cplusplus.com/reference/cwchar\wcsrtombs
/* wcsrtombs example */
#include <stdio.h>
#include <wchar.h>

int main()
{
    const wchar_t str[] = L"wcstombs example";
    const wchar_t* p;
    mbstate_t mbs;
    char buffer[32];
    int ret;

    mbrlen(NULL, 0, &mbs); /* initialize mbs */

    printf("wchar_t string: %ls \n", str);

    p = str;
    ret = wcsrtombs(buffer, &p, sizeof(buffer), &mbs);
    if (ret == 32)
        buffer[31] = '\0';
    if (ret)
        printf("multibyte string: %s \n", buffer);

    return 0;
}
