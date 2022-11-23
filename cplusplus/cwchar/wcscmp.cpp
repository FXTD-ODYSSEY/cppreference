// cplusplus link https://cplusplus.com/reference/cwchar\wcscmp
/* wcscmp example */
#include <stdio.h>
#include <wchar.h>

int main()
{
    wchar_t wsKey[] = L"apple\n";
    wchar_t wsInput[80];
    do {
        wprintf(L"Guess my favourite fruit? ");
        fgetws(wsInput, 80, stdin);
    } while (wcscmp(wsKey, wsInput) != 0);
    fputws(L"Correct answer!", stdout);
    return 0;
}
