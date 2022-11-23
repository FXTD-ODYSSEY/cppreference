// cplusplus link https://cplusplus.com/reference/string\basic_string\back
// string::back
#include <iostream>
#include <string>

int main()
{
    std::string str("hello world.");
    str.back() = '!';
    std::cout << str << '\n';
    return 0;
}
