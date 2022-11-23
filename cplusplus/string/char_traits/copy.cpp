// cplusplus link https://cplusplus.com/reference/string\char_traits\copy
// char_traits::copy
#include <iostream> // std::cout
#include <string> // std::char_traits

int main()
{
    char foo[] = "test string";
    char bar[20];

    unsigned len = std::char_traits<char>::length(foo);
    std::char_traits<char>::copy(bar, foo, len);

    bar[len] = '\0'; // append null-character

    std::cout << "foo contains: " << foo << '\n';
    std::cout << "bar contains: " << bar << '\n';
    return 0;
}
