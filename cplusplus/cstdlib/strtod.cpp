// cplusplus link https://cplusplus.com/reference/cstdlib\strtod
/* strtod example */
#include <stdio.h> /* printf, NULL */
#include <stdlib.h> /* strtod */

int main()
{
    char szOrbits[] = "365.24 29.53";
    char* pEnd;
    double d1, d2;
    d1 = strtod(szOrbits, &pEnd);
    d2 = strtod(pEnd, NULL);
    printf("The moon completes %.2f orbits per Earth year.\n", d1 / d2);
    return 0;
}
