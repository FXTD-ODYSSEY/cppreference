// cplusplus link https://cplusplus.com/reference/locale\moneypunct\positive_sign
// moneypunct example
#include <iostream> // std::cout
#include <locale> // std::locale, std::moneypunct, std::use_facet

// overload inserter to print patterns:
std::ostream& operator<<(std::ostream& os, std::moneypunct<char>::pattern p)
{
    for (int i = 0; i < 4; i++)
        switch (p.field[i]) {
        case std::moneypunct<char>::none:
            std::cout << "none ";
            break;
        case std::moneypunct<char>::space:
            std::cout << "space ";
            break;
        case std::moneypunct<char>::symbol:
            std::cout << "symbol ";
            break;
        case std::moneypunct<char>::sign:
            std::cout << "sign ";
            break;
        case std::moneypunct<char>::value:
            std::cout << "value ";
            break;
        }
    return os;
}

int main()
{
    std::locale mylocale;
    const std::moneypunct<char>& mp = std::use_facet<std::moneypunct<char>>(mylocale);

    std::cout << "moneypunct in locale \"" << mylocale.name() << "\":\n";

    std::cout << "decimal_point: " << mp.decimal_point() << '\n';
    std::cout << "thousands_sep: " << mp.thousands_sep() << '\n';
    std::cout << "grouping: " << mp.grouping() << '\n';
    std::cout << "curr_symbol: " << mp.curr_symbol() << '\n';
    std::cout << "positive_sign: " << mp.positive_sign() << '\n';
    std::cout << "negative_sign: " << mp.negative_sign() << '\n';
    std::cout << "frac_digits: " << mp.frac_digits() << '\n';
    std::cout << "pos_format: " << mp.pos_format() << '\n';
    std::cout << "neg_format: " << mp.neg_format() << '\n';

    return 0;
}
