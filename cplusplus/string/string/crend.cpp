// cplusplus link https://cplusplus.com/reference/string\string\crend
// string::crbegin/crend
#include <iostream>
#include <string>

int main()
{
    std::string str("lorem ipsum");
    for (auto rit = str.crbegin(); rit != str.crend(); ++rit)
        std::cout << *rit;
    std::cout << '\n';

    return 0;
}
