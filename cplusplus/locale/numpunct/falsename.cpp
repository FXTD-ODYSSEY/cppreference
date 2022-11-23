// cplusplus link https://cplusplus.com/reference/locale\numpunct\falsename
// numpunct::falsename example
#include <iostream> // std::cout
#include <locale> // std::locale, std::numpunct, std::use_facet
#include <string> // std::string

int main()
{
    const std::numpunct<char>& punct_facet = std::use_facet<std::numpunct<char>>(std::cout.getloc());

    std::string str = "2+2=5 is ";
    if (2 + 2 == 5)
        str += punct_facet.truename();
    else
        str += punct_facet.falsename();

    std::cout << str << '\n';
    return 0;
}
