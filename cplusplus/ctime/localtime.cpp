// cplusplus link https://cplusplus.com/reference/ctime\localtime
/* localtime example */
#include <stdio.h> /* puts, printf */
#include <time.h> /* time_t, struct tm, time, localtime */

int main()
{
    time_t rawtime;
    struct tm* timeinfo;

    time(&rawtime);
    timeinfo = localtime(&rawtime);
    printf("Current local time and date: %s", asctime(timeinfo));

    return 0;
}
