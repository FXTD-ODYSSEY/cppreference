// cplusplus link https://cplusplus.com/reference/cwchar\wcstold
/* wcstold example */
#include <wchar.h>

int main()
{
    wchar_t szOrbits[] = L"90613.305 365.24";
    wchar_t* pEnd;
    long double f1, f2;
    f1 = wcstold(szOrbits, &pEnd);
    f2 = wcstold(pEnd, NULL);
    wprintf(L"Pluto takes %.2Lf years to complete an orbit.\n", f1 / f2);
    return 0;
}
