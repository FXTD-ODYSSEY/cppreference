// cplusplus link https://cplusplus.com/reference/cwchar\wcstoul
/* wcstoul example */
#include <stdio.h>
#include <wchar.h>

int main()
{
    wchar_t wsInput[256];
    unsigned long ul;
    wprintf(L"Enter an unsigned number: ");
    fgetws(wsInput, 256, stdin);
    ul = wcstoul(wsInput, NULL, 0);
    wprintf(L"Value entered: %lu. Its double: %lu\n", ul, ul * 2);
    return 0;
}
