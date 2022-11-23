// cplusplus link https://cplusplus.com/reference/locale\numpunct\grouping
// numpunct::grouping example
#include <iostream> // std::cout
#include <locale> // std::locale, std::numpunct, std::use_facet
#include <string> // std::string

// custom numpunct with grouping:
struct my_numpunct : std::numpunct<char> {
    std::string do_grouping() const { return "\03"; }
};

int main()
{
    std::locale loc(std::cout.getloc(), new my_numpunct);
    std::cout.imbue(loc);
    std::cout << "one million: " << 1000000 << '\n';
    return 0;
}
