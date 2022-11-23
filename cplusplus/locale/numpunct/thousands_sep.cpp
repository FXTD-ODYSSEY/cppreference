// cplusplus link https://cplusplus.com/reference/locale\numpunct\thousands_sep
// numpunct::thousands_sep example
#include <iostream> // std::cout
#include <locale> // std::locale, std::numpunct, std::use_facet

int main()
{
    int q = 10077;
    char separator = std::use_facet<std::numpunct<char>>(std::cout.getloc()).thousands_sep();
    std::cout << q / 1000 << separator;
    std::cout.width(3);
    std::cout.fill('0');
    std::cout << q % 1000 << '\n';
    return 0;
}
