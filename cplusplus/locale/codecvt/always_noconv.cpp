// cplusplus link https://cplusplus.com/reference/locale\codecvt\always_noconv
// codecvt::always_noconv example
#include <iostream> // std::cout, std::boolalpha
#include <locale> // std::locale, std::codecvt, std::use_facet

int main()
{
    std::locale loc;

    std::cout << std::boolalpha;

    std::cout << "always_noconv for codecvt<char,char,mbstate_t>: ";
    std::cout << std::use_facet<std::codecvt<char, char, mbstate_t>>(loc).always_noconv();
    std::cout << '\n';

    std::cout << "always_noconv for codecvt<wchar_t,char,mbstate_t>: ";
    std::cout << std::use_facet<std::codecvt<wchar_t, char, mbstate_t>>(loc).always_noconv();
    std::cout << '\n';

    return 0;
}
