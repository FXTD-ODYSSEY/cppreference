// cppreference link https://en.cppreference.com/w/cpp/locale/moneypunct/pos_format
#include <iomanip>
#include <iostream>
#include <locale>

struct my_punct : std::moneypunct_byname<char, false> {
    my_punct(const char* name)
        : moneypunct_byname(name)
    {
    }
    pattern do_pos_format() const { return { { value, space, symbol, sign } }; }
    pattern do_neg_format() const { return { { value, space, symbol, sign } }; }
};
int main()
{
    std::cout.imbue(std::locale("en_US.utf8"));
    std::cout << "american locale: " << std::showbase
              << std::put_money(12345678.0) << '\n';

    std::cout.imbue(std::locale(std::cout.getloc(), new my_punct("en_US.utf8")));
    std::cout << "locale with modified moneypunct:\n"
              << std::put_money(12345678.0) << '\n'
              << std::put_money(-12345678.0) << '\n';
}
