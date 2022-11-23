// cplusplus link https://cplusplus.com/reference/locale\codecvt\encoding
// codecvt::encoding example
#include <iostream> // std::cout
#include <locale> // std::locale, std::codecvt, std::use_facet

int main()
{
    std::locale loc;

    const std::codecvt<wchar_t, char, mbstate_t>& myfacet = std::use_facet<std::codecvt<wchar_t, char, mbstate_t>>(loc);

    std::cout << "Characteristics of codecvt<wchar_t,char,mbstate_t>:\n";
    std::cout << "Encoding: " << myfacet.encoding() << '\n';
    std::cout << "Always noconv: " << myfacet.always_noconv() << '\n';
    std::cout << "Max length: " << myfacet.max_length() << '\n';
    return 0;
}
