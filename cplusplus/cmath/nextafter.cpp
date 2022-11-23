// cplusplus link https://cplusplus.com/reference/cmath\nextafter
/* nextafter example */
#include <math.h> /* nextafter */
#include <stdio.h> /* printf */

int main()
{
    printf("first representable value greater than zero: %e\n", nextafter(0.0, 1.0));
    printf("first representable value less than zero: %e\n", nextafter(0.0, -1.0));
    return 0;
}
