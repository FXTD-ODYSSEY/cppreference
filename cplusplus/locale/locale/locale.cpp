// cplusplus link https://cplusplus.com/reference/locale\locale\locale
// locale::locale
#include <iostream> // std::cout
#include <locale> // std::locale
#include <stdexcept> // std::runtime_error

int main()
{
    std::locale loc; // initialized to locale::classic()

    try {
        loc = std::locale("en_US.UTF8");
    } catch (std::runtime_error) {
        loc = std::locale(loc, "", std::locale::ctype);
    }

    std::cout << "The selected locale is: " << loc.name() << '\n';

    return 0;
}
