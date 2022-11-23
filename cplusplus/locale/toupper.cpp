// cplusplus link https://cplusplus.com/reference/locale\toupper
// toupper example (C++)
#include <iostream> // std::cout
#include <locale> // std::locale, std::toupper
#include <string> // std::string

int main()
{
    std::locale loc;
    std::string str = "Test String.\n";
    for (std::string::size_type i = 0; i < str.length(); ++i)
        std::cout << std::toupper(str[i], loc);
    return 0;
}
