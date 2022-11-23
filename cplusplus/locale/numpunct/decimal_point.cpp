// cplusplus link https://cplusplus.com/reference/locale\numpunct\decimal_point
// numpunct::decimal_point example
#include <iostream> // std::cout
#include <locale> // std::locale, std::numpunct, std::use_facet

int main()
{
    int nUnits = 11;
    int nQuarters = 7;
    char point = std::use_facet<std::numpunct<char>>(std::cout.getloc()).decimal_point();
    std::cout << nUnits << " units and " << nQuarters << " quarters total ";
    std::cout << (nUnits + nQuarters / 4) << point << (25 * (nQuarters % 4)) << '\n';
    return 0;
}
