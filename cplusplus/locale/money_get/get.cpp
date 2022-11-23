// cplusplus link https://cplusplus.com/reference/locale\money_get\get
// money_get example
#include <iostream> // std::cin, std::cout, std::ios
#include <locale> // std::locale, std::money_get, std::use_facet

int main()
{
    std::locale loc(""); // default locale
    std::ios::iostate state;
    long double price;

    std::cout << "Please, enter the price: ";
    std::use_facet<std::money_get<char>>(loc).get(std::cin, std::money_get<char>::iter_type(), false, std::cin, state, price);

    if ((state & std::ios::failbit) == std::ios::failbit)
        std::cout << "ERROR: failed to read price\n";
    else
        std::cout << "The price of three items is " << (price * 3.0) << '\n';

    return 0;
}
