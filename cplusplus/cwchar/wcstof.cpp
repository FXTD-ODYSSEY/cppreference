// cplusplus link https://cplusplus.com/reference/cwchar\wcstof
/* wcstof example */
#include <wchar.h>

int main()
{
    wchar_t szOrbits[] = L"686.97 365.24";
    wchar_t* pEnd;
    double d1, d2;
    d1 = wcstof(szOrbits, &pEnd);
    d2 = wcstof(pEnd, NULL);
    wprintf(L"One martian year takes %.2f Earth years.\n", d1 / d2);
    return 0;
}
