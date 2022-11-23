// cplusplus link https://cplusplus.com/reference/cwchar\wcstod
/* wcstod example */
#include <wchar.h>

int main()
{
    wchar_t szOrbits[] = L"365.24 29.53";
    wchar_t* pEnd;
    double d1, d2;
    d1 = wcstod(szOrbits, &pEnd);
    d2 = wcstod(pEnd, NULL);
    wprintf(L"The moon completes %.2f orbits per Earth year.\n", d1 / d2);
    return 0;
}
