// cppreference link https://en.cppreference.com/w/cpp/locale/moneypunct/decimal_point
#include <iomanip>
#include <iostream>
#include <locale>

void show_dpt(const char* locname)
{
    std::locale loc(locname);
    std::cout.imbue(loc);
    std::cout << locname << " decimal point is '"
              << std::use_facet<std::moneypunct<char>>(loc).decimal_point()
              << "' for example: " << std::showbase << std::put_money(123);
    if (std::use_facet<std::moneypunct<char>>(loc).frac_digits() == 0)
        std::cout << " (does not use frac digits) ";

    std::cout << '\n';
}

int main()
{
    show_dpt("en_US.utf8");
    show_dpt("ja_JP.utf8");
    show_dpt("sv_SE.utf8");
    show_dpt("de_DE.utf8");
}
