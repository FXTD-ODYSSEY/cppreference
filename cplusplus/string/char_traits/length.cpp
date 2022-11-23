// cplusplus link https://cplusplus.com/reference/string\char_traits\length
// char_traits::length
#include <iostream> // std::cout
#include <string> // std::char_traits

int main()
{
    const char* foo = "String literal";
    std::cout << "foo has a length of ";
    std::cout << std::char_traits<char>::length(foo);
    std::cout << " characters.\n";
    return 0;
}
