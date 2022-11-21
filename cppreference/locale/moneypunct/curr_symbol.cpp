// cppreference link https://en.cppreference.com/w/cpp/locale/moneypunct/curr_symbol
#include <iostream>
#include <locale>
void show_ccy(const char* locname)
{
    std::locale loc(locname);
    std::cout << locname << " currency symbol is "
              << std::use_facet<std::moneypunct<char, true>>(loc).curr_symbol()
              << "or " << std::use_facet<std::moneypunct<char>>(loc).curr_symbol()
              << " for short\n";
}
int main()
{
    show_ccy("en_US.utf8");
    show_ccy("ja_JP.utf8");
    show_ccy("sv_SE.utf8");
    show_ccy("ru_RU.utf8");
    show_ccy("vi_VN.utf8");
}
