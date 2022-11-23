// cplusplus link https://cplusplus.com/reference/string\string\find_last_not_of
// string::find_last_not_of
#include <cstddef> // std::size_t
#include <iostream> // std::cout
#include <string> // std::string

int main()
{
    std::string str("Please, erase trailing white-spaces   \n");
    std::string whitespaces(" \t\f\v\n\r");

    std::size_t found = str.find_last_not_of(whitespaces);
    if (found != std::string::npos)
        str.erase(found + 1);
    else
        str.clear(); // str is all whitespace

    std::cout << '[' << str << "]\n";

    return 0;
}
