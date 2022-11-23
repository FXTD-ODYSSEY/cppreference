// cplusplus link https://cplusplus.com/reference/locale\isalpha
// isalpha example (C++)
#include <iostream> // std::cout
#include <locale> // std::locale, std::isalpha
#include <string> // std::string

int main()
{
    std::locale loc;
    std::string str = "C++";

    for (std::string::iterator it = str.begin(); it != str.end(); ++it) {
        if (std::isalpha(*it, loc))
            std::cout << "character " << *it << " is alphabetic\n";
        else
            std::cout << "character " << *it << " is not alphabetic\n";
    }
    return 0;
}
