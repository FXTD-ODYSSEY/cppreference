// cplusplus link https://cplusplus.com/reference/locale\isupper
// isupper example (C++)
#include <iostream> // std::cout
#include <locale> // std::locale, std::isupper, std::tolower
#include <string> // std::string

int main()
{
    std::locale loc;
    std::string str = "Test String.\n";
    char c;
    for (std::string::size_type i = 0; i < str.length(); ++i) {
        c = str[i];
        if (std::isupper(c, loc))
            c = std::tolower(c, loc);
        std::cout << c;
    }
    return 0;
}
