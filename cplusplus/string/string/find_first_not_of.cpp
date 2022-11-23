// cplusplus link https://cplusplus.com/reference/string\string\find_first_not_of
// string::find_first_not_of
#include <cstddef> // std::size_t
#include <iostream> // std::cout
#include <string> // std::string

int main()
{
    std::string str("look for non-alphabetic characters...");

    std::size_t found = str.find_first_not_of("abcdefghijklmnopqrstuvwxyz ");

    if (found != std::string::npos) {
        std::cout << "The first non-alphabetic character is " << str[found];
        std::cout << " at position " << found << '\n';
    }

    return 0;
}
