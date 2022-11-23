// cplusplus link https://cplusplus.com/reference/locale\money_put\put
// money_put example
#include <iostream> // std::cin, std::cout
#include <locale> // std::locale, std::money_put, std::use_facet

int main()
{

    const std::money_put<char>& monput = std::use_facet<std::money_put<char>>(std::cout.getloc());

    monput.put(std::cout, false, std::cout, ' ', 12.95);
    std::cout << '\n';

    monput.put(std::cout, false, std::cout, ' ', "1295");
    std::cout << '\n';

    return 0;
}
