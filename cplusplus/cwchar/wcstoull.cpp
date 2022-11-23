// cplusplus link https://cplusplus.com/reference/cwchar\wcstoull
/* wcstoull example */
#include <wchar.h>

int main()
{
    wchar_t wsNumbers[] = L"250068492 7b06af00 1100011011110101010001100000 0x6fffff";
    wchar_t* pEnd;
    unsigned long long int ulli1, ulli2, ulli3, ulli4;
    ulli1 = wcstoull(wsNumbers, &pEnd, 10);
    ulli2 = wcstoull(pEnd, &pEnd, 16);
    ulli3 = wcstoull(pEnd, &pEnd, 2);
    ulli4 = wcstoull(pEnd, NULL, 0);
    wprintf(L"The decimal equivalents are: %llu, %llu, %llu and %llu.\n", ulli1, ulli2, ulli3, ulli4);
    return 0;
}
