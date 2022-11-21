// cppreference link https://en.cppreference.com/w/cpp/locale/moneypunct/frac_digits
#include <iomanip>
#include <iostream>
#include <iterator>
#include <locale>
struct space_out : std::moneypunct<char> {
    pattern do_pos_format() const { return { { value, none, none, none } }; }
    int do_frac_digits() const { return 0; }
    char_type do_thousands_sep() const { return ' '; }
    string_type do_grouping() const { return "\002"; }
};
int main()
{
    std::cout.imbue(std::locale("en_US.UTF-8"));
    std::cout << "american locale: " << std::showbase
              << std::put_money(12345678.0) << '\n';

    std::cout.imbue(std::locale(std::cout.getloc(), new space_out));
    std::cout << "locale with modified moneypunct: "
              << std::put_money(12345678.0) << '\n';
}
