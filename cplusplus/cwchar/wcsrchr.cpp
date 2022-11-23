// cplusplus link https://cplusplus.com/reference/cwchar\wcsrchr
/* wcsrchr example */
#include <wchar.h>

int main()
{
    wchar_t wcs[] = L"This is a sample wide string";
    wchar_t* pwc;
    pwc = wcsrchr(wcs, L's');
    wprintf(L"Last occurence of L's' found at %d \n", pwc - wcs + 1);
    return 0;
}
