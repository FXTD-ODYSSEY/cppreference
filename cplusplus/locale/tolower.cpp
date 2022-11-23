// cplusplus link https://cplusplus.com/reference/locale\tolower
// tolower example (C++)
#include <iostream> // std::cout
#include <locale> // std::locale, std::tolower
#include <string> // std::string

int main()
{
    std::locale loc;
    std::string str = "Test String.\n";
    for (std::string::size_type i = 0; i < str.length(); ++i)
        std::cout << std::tolower(str[i], loc);
    return 0;
}
