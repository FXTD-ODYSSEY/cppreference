// cppreference link https://en.cppreference.com/w/cpp/locale/moneypunct/positive_sign
#include <iomanip>
#include <iostream>
#include <locale>

struct my_punct : std::moneypunct_byname<char, false> {
    my_punct(const char* name)
        : moneypunct_byname(name)
    {
    }
    string_type do_negative_sign() const { return "()"; }
};

int main()
{
    std::locale loc("de_DE.utf8");
    std::cout.imbue(loc);
    std::cout << loc.name() << " negative sign is '"
              << std::use_facet<std::moneypunct<char>>(loc).negative_sign()
              << "' for example: " << std::showbase << std::put_money(-1234) << '\n';

    std::locale loc2("ms_MY.utf8");
    std::cout.imbue(loc2);
    std::cout << loc2.name() << " negative sign is '"
              << std::use_facet<std::moneypunct<char>>(loc2).negative_sign()
              << "' for example: " << std::put_money(-1234) << '\n';

    std::cout.imbue(std::locale(std::cout.getloc(), new my_punct("de_DE.utf8")));
    std::cout << "de_DE.utf8 with negative_sign set to \"()\": "
              << std::put_money(-1234) << '\n';
}
