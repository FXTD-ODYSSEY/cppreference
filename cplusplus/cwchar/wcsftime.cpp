// cplusplus link https://cplusplus.com/reference/cwchar\wcsftime
/* wcsftime example */
#include <time.h>
#include <wchar.h>

int main()
{
    time_t rawtime;
    struct tm* timeinfo;
    wchar_t buffer[80];

    time(&rawtime);
    timeinfo = localtime(&rawtime);

    wcsftime(buffer, 80, L"Now it's %I:%M%p.", timeinfo);
    wprintf(L"%ls\n", buffer);

    return 0;
}
