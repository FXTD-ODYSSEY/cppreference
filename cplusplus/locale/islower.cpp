// cplusplus link https://cplusplus.com/reference/locale\islower
// islower example (C++)
#include <iostream> // std::cout
#include <locale> // std::locale, std::islower, std::toupper
#include <string> // std::string

int main()
{
    std::locale loc;
    std::string str = "Test String.\n";
    char c;
    for (std::string::size_type i = 0; i < str.length(); ++i) {
        c = str[i];
        if (std::islower(c, loc))
            c = std::toupper(c, loc);
        std::cout << c;
    }
    return 0;
}
