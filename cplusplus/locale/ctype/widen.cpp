// cplusplus link https://cplusplus.com/reference/locale\ctype\widen
// ctype::widen example
#include <iostream> // std::wcout, std::endl
#include <locale> // std::locale, std::ctype, std::use_facet

int main()
{
    std::locale loc;

    const char narrow_phrase[] = "Seventy-seven foxes";
    wchar_t wide_phrase[sizeof(narrow_phrase)];

    std::wcout << L"The first wide character is: ";
    wchar_t wc = std::use_facet<std::ctype<wchar_t>>(loc).widen(*narrow_phrase);
    std::wcout << wc << std::endl;

    std::wcout << L"The wide-character phrase is: ";
    std::use_facet<std::ctype<wchar_t>>(loc).widen(narrow_phrase,
        narrow_phrase + sizeof(narrow_phrase),
        wide_phrase);
    std::wcout << wide_phrase << std::endl;

    return 0;
}
