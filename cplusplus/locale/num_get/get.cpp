// cplusplus link https://cplusplus.com/reference/locale\num_get\get
// num_get example
#include <iostream> // std::cin, std::cout, std::ios
#include <iterator> // std::istreambuf_iterator
#include <locale> // std::locale, std::num_get, std::use_facet
#include <string> // std::string

int main()
{
    std::locale loc;
    std::ios::iostate state;
    float mypi, yourpi;

    std::string number("3.14159");
    // get from string:
    std::use_facet<std::num_get<char, std::string::iterator>>(loc).get(number.begin(), number.end(), std::cin, state, mypi);

    std::cout << "Please, enter PI: ";
    // get from istream:
    std::use_facet<std::num_get<char>>(loc).get(std::cin, std::istreambuf_iterator<char>(), std::cin, state, yourpi);

    if ((mypi - yourpi > 0.01) || (mypi - yourpi < -0.01))
        std::cout << "Wrong!\n";
    else
        std::cout << "Right!\n";

    return 0;
}
