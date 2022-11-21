// cppreference link https://en.cppreference.com/w/cpp/locale/lconv
#include <clocale>
#include <iostream>

int main()
{
    std::setlocale(LC_ALL, "ja_JP.UTF-8");
    std::lconv* lc = std::localeconv();
    std::cout << "Japanese currency symbol: " << lc->currency_symbol
              << '(' << lc->int_curr_symbol << ")\n";
}
