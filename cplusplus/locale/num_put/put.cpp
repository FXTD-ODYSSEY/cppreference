// cplusplus link https://cplusplus.com/reference/locale\num_put\put
// num_put example
#include <iostream> // std::cout
#include <locale> // std::locale, std::num_put, std::use_facet

int main()
{
    std::cout.width(10); // set field width to 10 characters

    std::use_facet<std::num_put<char>>(std::cout.getloc()).put(std::cout, std::cout, '0', 3.14159265);

    std::cout << '\n';

    return 0;
}
