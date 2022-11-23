// cplusplus link https://cplusplus.com/reference/string\basic_string\operator%2B%3D
// string::operator+=
#include <iostream>
#include <string>

int main()
{
    std::string name("John");
    std::string family("Smith");
    name += " K. "; // c-string
    name += family; // string
    name += '\n'; // character

    std::cout << name;
    return 0;
}
