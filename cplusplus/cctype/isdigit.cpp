// cplusplus link https://cplusplus.com/reference/cctype\isdigit
/* isdigit example */
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
int main()
{
    char str[] = "1776ad";
    int year;
    if (isdigit(str[0])) {
        year = atoi(str);
        printf("The year that followed %d was %d.\n", year, year + 1);
    }
    return 0;
}
