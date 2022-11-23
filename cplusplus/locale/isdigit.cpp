// cplusplus link https://cplusplus.com/reference/locale\isdigit
// isdigit example (C++)
#include <iostream> // std::cout
#include <locale> // std::locale, std::isdigit
#include <sstream> // std::stringstream
#include <string> // std::string

int main()
{
    std::locale loc;
    std::string str = "1776ad";
    if (isdigit(str[0], loc)) {
        int year;
        std::stringstream(str) >> year;
        std::cout << "The year that followed " << year << " was " << (year + 1) << ".\n";
    }
    return 0;
}
