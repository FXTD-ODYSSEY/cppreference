// cplusplus link https://cplusplus.com/reference/string\basic_string\find_last_not_of
// string::find_last_not_of
#include <iostream>
#include <string>

int main()
{
    std::string str("Please, erase trailing white-spaces   \n");
    std::string whitespaces(" \t\f\v\n\r");

    std::string::size_type found = str.find_last_not_of(whitespaces);
    if (found != std::string::npos)
        str.erase(found + 1);
    else
        str.clear(); // str is all whitespace

    std::cout << '[' << str << "]\n";

    return 0;
}
