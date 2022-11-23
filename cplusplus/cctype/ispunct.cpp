// cplusplus link https://cplusplus.com/reference/cctype\ispunct
/* ispunct example */
#include <ctype.h>
#include <stdio.h>
int main()
{
    int i = 0;
    int cx = 0;
    char str[] = "Hello, welcome!";
    while (str[i]) {
        if (ispunct(str[i]))
            cx++;
        i++;
    }
    printf("Sentence contains %d punctuation characters.\n", cx);
    return 0;
}
