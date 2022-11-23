// cplusplus link https://cplusplus.com/reference/csetjmp\setjmp
/* setjmp example: error handling */
#include <setjmp.h> /* jmp_buf, setjmp, longjmp */
#include <stdio.h> /* printf, scanf */
#include <stdlib.h> /* exit */

main()
{
    jmp_buf env;
    int val;

    val = setjmp(env);
    if (val) {
        fprintf(stderr, "Error %d happened", val);
        exit(val);
    }

    /* code here */

    longjmp(env, 101); /* signaling an error */

    return 0;
}
