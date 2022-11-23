// cplusplus link https://cplusplus.com/reference/cmath\nexttoward
/* nexttoward example */
#include <math.h> /* nexttoward */
#include <stdio.h> /* printf */

int main()
{
    printf("first representable value greater than zero: %e\n", nexttoward(0.0, 1.0L));
    printf("first representable value less than zero: %e\n", nexttoward(0.0, -1.0L));
    return 0;
}
