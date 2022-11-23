// cplusplus link https://cplusplus.com/reference/string\basic_string\find_first_not_of
// string::find_first_not_of
#include <iostream>
#include <string>

int main()
{
    std::string str("look for non-alphabetic characters...");

    std::string::size_type found = str.find_first_not_of("abcdefghijklmnopqrstuvwxyz ");

    if (found != std::string::npos) {
        std::cout << "The first non-alphabetic character is " << str[found];
        std::cout << " at position " << found << '\n';
    }

    return 0;
}
