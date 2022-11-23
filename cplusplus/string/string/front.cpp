// cplusplus link https://cplusplus.com/reference/string\string\front
// string::front
#include <iostream>
#include <string>

int main()
{
    std::string str("test string");
    str.front() = 'T';
    std::cout << str << '\n';
    return 0;
}
