// cplusplus link https://cplusplus.com/reference/locale\locale\combine
// locale::combine example
#include <iostream> // std::cout
#include <locale> // std::locale, std::num_put

int main()
{
    std::locale loc(""); // initialized to environment's locale

    // combine loc with the "C" locale for num_put
    loc = loc.combine<std::num_put<char>>(std::locale::classic());

    std::cout.imbue(loc);
    std::cout << 3.14159 << '\n';

    return 0;
}
