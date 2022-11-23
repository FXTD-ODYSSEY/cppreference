// cplusplus link https://cplusplus.com/reference/cinttypes
/* example of <inttypes.h> */
#include <inttypes.h> /* strtoimax, PRIdMAX, SCNdMAX */
#include <stdint.h> /* intmax_t */
#include <stdio.h> /* printf, scanf, fgets, stdin, NULL */

int main()
{
    char buffer[80];
    intmax_t foo, bar;

    printf("Please, enter a number: ");
    fgets(buffer, 80, stdin);
    foo = strtoimax(buffer, NULL, 10);

    printf("Thanks for entering %" PRIdMAX ".\n", foo);

    printf("Please, enter another number: ");
    scanf("%" SCNdMAX, &bar);

    printf("%" PRIdMAX " by %" PRIdMAX " is %" PRIdMAX, foo, bar, foo * bar);

    return 0;
}
