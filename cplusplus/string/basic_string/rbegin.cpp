// cplusplus link https://cplusplus.com/reference/string\basic_string\rbegin
// string::rbegin/rend
#include <iostream>
#include <string>

int main()
{
    std::string str("now step live...");
    for (std::string::reverse_iterator rit = str.rbegin(); rit != str.rend(); ++rit)
        std::cout << *rit;
    return 0;
}
