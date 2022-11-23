// cplusplus link https://cplusplus.com/reference/cassert\assert
/* assert example */
#include <assert.h> /* assert */
#include <stdio.h> /* printf */

void print_number(int* myInt)
{
    assert(myInt != NULL);
    printf("%d\n", *myInt);
}

int main()
{
    int a = 10;
    int* b = NULL;
    int* c = NULL;

    b = &a;

    print_number(b);
    print_number(c);

    return 0;
}
