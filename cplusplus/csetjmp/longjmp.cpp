// cplusplus link https://cplusplus.com/reference/csetjmp\longjmp
/* longjmp example */
#include <setjmp.h> /* jmp_buf, setjmp, longjmp */
#include <stdio.h> /* printf */

main()
{
    jmp_buf env;
    int val;

    val = setjmp(env);

    printf("val is %d\n", val);

    if (!val)
        longjmp(env, 1);

    return 0;
}
