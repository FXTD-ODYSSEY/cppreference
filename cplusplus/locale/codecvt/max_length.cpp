// cplusplus link https://cplusplus.com/reference/locale\codecvt\max_length
// codecvt::max_length example
#include <iostream> // std::cout
#include <locale> // std::locale, std::codecvt, std::use_facet

int main()
{
    std::locale loc;

    std::cout << "max_length for codecvt<char,char,mbstate_t>: ";
    std::cout << std::use_facet<std::codecvt<char, char, mbstate_t>>(loc).max_length();
    std::cout << '\n';

    std::cout << "max_length for codecvt<wchar_t,char,mbstate_t>: ";
    std::cout << std::use_facet<std::codecvt<wchar_t, char, mbstate_t>>(loc).max_length();
    std::cout << '\n';

    return 0;
}
