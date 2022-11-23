// cplusplus link https://cplusplus.com/reference/string\char_traits\move
// char_traits::move
#include <iostream> // std::cout
#include <string> // std::char_traits

int main()
{
    char foo[] = "---o............";
    std::cout << foo << '\n';
    std::char_traits<char>::move(foo + 3, foo, 4);
    std::cout << foo << '\n';
    std::char_traits<char>::move(foo + 6, foo, 7);
    std::cout << foo << '\n';
    return 0;
}
