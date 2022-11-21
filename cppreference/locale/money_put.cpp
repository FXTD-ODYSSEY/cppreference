// cppreference link https://en.cppreference.com/w/cpp/locale/money_put
#include <iomanip>
#include <iostream>
#include <iterator>
#include <locale>
int main()
{
    // using the IO manipulator
    std::cout.imbue(std::locale("en_US.UTF-8"));
    std::cout << "american locale: "
              << std::showbase << std::put_money(12345678.9) << '\n';

    // using the facet directly
    std::cout.imbue(std::locale("de_DE.UTF-8"));
    std::cout << "german locale: ";
    auto& f = std::use_facet<std::money_put<char>>(std::cout.getloc());
    f.put({ std::cout }, false, std::cout, std::cout.fill(), 12345678.9);
    std::cout << '\n';
}
