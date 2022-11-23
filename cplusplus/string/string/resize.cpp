// cplusplus link https://cplusplus.com/reference/string\string\resize
// resizing string
#include <iostream>
#include <string>

int main()
{
    std::string str("I like to code in C");
    std::cout << str << '\n';

    unsigned sz = str.size();

    str.resize(sz + 2, '+');
    std::cout << str << '\n';

    str.resize(14);
    std::cout << str << '\n';
    return 0;
}
