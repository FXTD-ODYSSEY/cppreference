// cplusplus link https://cplusplus.com/reference/cwchar\wcstol
/* wcstol example */
#include <wchar.h>

int main()
{
    wchar_t wsNumbers[] = L"2001 60c0c0 -1101110100110100100000 0x6fffff";
    wchar_t* pEnd;
    long int li1, li2, li3, li4;
    li1 = wcstol(wsNumbers, &pEnd, 10);
    li2 = wcstol(pEnd, &pEnd, 16);
    li3 = wcstol(pEnd, &pEnd, 2);
    li4 = wcstol(pEnd, NULL, 0);
    wprintf(L"The decimal equivalents are: %ld, %ld, %ld and %ld.\n", li1, li2, li3, li4);
    return 0;
}
