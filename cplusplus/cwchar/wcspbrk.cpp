// cplusplus link https://cplusplus.com/reference/cwchar\wcspbrk
/* wcspbrk example */
#include <wchar.h>

int main()
{
    wchar_t wcs[] = L"This is a sample wide string";
    wchar_t key[] = L"aeiou";
    wchar_t* pwc;
    wprintf(L"Vowels in '%ls': ", wcs);
    pwc = wcspbrk(wcs, key);
    while (pwc != NULL) {
        wprintf(L"%c ", *pwc);
        pwc = wcspbrk(pwc + 1, key);
    }
    wprintf(L"\n");
    return 0;
}
