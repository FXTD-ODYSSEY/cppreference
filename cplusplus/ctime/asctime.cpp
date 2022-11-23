// cplusplus link https://cplusplus.com/reference/ctime\asctime
/* asctime example */
#include <stdio.h> /* printf */
#include <time.h> /* time_t, struct tm, time, localtime, asctime */

int main()
{
    time_t rawtime;
    struct tm* timeinfo;

    time(&rawtime);
    timeinfo = localtime(&rawtime);
    printf("The current date/time is: %s", asctime(timeinfo));

    return 0;
}
