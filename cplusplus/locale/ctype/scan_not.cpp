// cplusplus link https://cplusplus.com/reference/locale\ctype\scan_not
// ctype::scan_not example
#include <iostream> // std::cout
#include <locale> // std::locale, std::ctype, std::use_facet

int main()
{
    std::locale loc;

    const char period[] = "November2008";

    const char* p = std::use_facet<std::ctype<char>>(loc).scan_not(std::ctype<char>::alpha, period, period + 12);

    std::cout << "The first non-alphabetic character is: " << *p << '\n';

    return 0;
}
