// cplusplus link https://cplusplus.com/reference/locale\ctype\toupper
// ctype::toupper example
#include <iostream> // std::cout
#include <locale> // std::locale, std::ctype, std::use_facet

int main()
{
    std::locale loc;

    char site[] = "cplusplus.com";

    std::cout << "The first letter of " << site << " as an uppercase is: ";
    std::cout << std::use_facet<std::ctype<char>>(loc).toupper(*site);
    std::cout << '\n';

    std::cout << "The result of converting " << site << " to uppercase is: ";
    std::use_facet<std::ctype<char>>(loc).toupper(site, site + sizeof(site));
    std::cout << site << '\n';

    return 0;
}
