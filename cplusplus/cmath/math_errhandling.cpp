// cplusplus link https://cplusplus.com/reference/cmath\math_errhandling
/* math_errhandling example */
#include <errno.h> /* errno, EDOM */
#include <fenv.h> /* feclearexcept, fetestexcept, FE_ALL_EXCEPT, FE_INVALID */
#include <math.h> /* math_errhandling */
#include <stdio.h> /* printf */
#pragma STDC FENV_ACCESS on

int main()
{
    errno = 0;
    if (math_errhandling & MATH_ERREXCEPT)
        feclearexcept(FE_ALL_EXCEPT);

    printf("Error handling: %d", math_errhandling);

    sqrt(-1);
    if (math_errhandling & MATH_ERRNO) {
        if (errno == EDOM)
            printf("errno set to EDOM\n");
    }
    if (math_errhandling & MATH_ERREXCEPT) {
        if (fetestexcept(FE_INVALID))
            printf("FE_INVALID raised\n");
    }

    return 0;
}
