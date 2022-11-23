// cplusplus link https://cplusplus.com/reference/locale\ctype\tolower
// ctype::tolower example
#include <iostream> // std::cout
#include <locale> // std::locale, std::ctype, std::use_facet

int main()
{
    std::locale loc;

    char site[] = "CPlusPlus.com";

    std::cout << "The first letter of " << site << " as a lowercase is: ";
    std::cout << std::use_facet<std::ctype<char>>(loc).tolower(*site);
    std::cout << '\n';

    std::cout << "The result of converting " << site << " to lowercase is: ";
    std::use_facet<std::ctype<char>>(loc).tolower(site, site + sizeof(site));
    std::cout << site << '\n';

    return 0;
}
