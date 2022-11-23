// cplusplus link https://cplusplus.com/reference/cwchar\swprintf
/* swprintf example */
#include <stdio.h>
#include <wchar.h>

int main()
{
    wchar_t buffer[100];
    int cx;

    cx = swprintf(buffer, 100, L"The half of %d is %d", 80, 80 / 2);

    swprintf(buffer + cx, 100 - cx - 1, L", and the half of that is %d.", 80 / 2 / 2);

    fputws(buffer, stdout);

    return 0;
}
