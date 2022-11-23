// cplusplus link https://cplusplus.com/reference/locale\isalnum
// isalnum example (C++)
#include <iostream> // std::cout
#include <locale> // std::locale, std::isalnum
#include <string> // std::string

int main()
{
    std::locale loc;
    std::string str = "c3po...";
    std::string::size_type i = 0;
    while ((i < str.length()) && (std::isalnum(str[i]))) {
        ++i;
    }
    std::cout << "The first " << i << " characters are alphanumeric.\n";
    return 0;
}
