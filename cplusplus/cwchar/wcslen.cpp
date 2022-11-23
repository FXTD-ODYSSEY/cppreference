// cplusplus link https://cplusplus.com/reference/cwchar\wcslen
/* wcslen example */
#include <stdio.h>
#include <wchar.h>

int main()
{
    wchar_t wsInput[256];
    wprintf(L"Enter a sentence: ");
    fgetws(wsInput, 256, stdin); /* includes newline characters */
    wprintf(L"You entered %u characters.\n", wcslen(wsInput));
    return 0;
}
