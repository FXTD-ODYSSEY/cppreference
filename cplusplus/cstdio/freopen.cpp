// cplusplus link https://cplusplus.com/reference/cstdio\freopen
/* freopen example: redirecting stdout */
#include <stdio.h>

int main()
{
    freopen("myfile.txt", "w", stdout);
    printf("This sentence is redirected to a file.");
    fclose(stdout);
    return 0;
}
