// cplusplus link https://cplusplus.com/reference/string\char_traits\find
// char_traits::find
#include <iostream> // std::cout
#include <string> // std::char_traits

int main()
{
    const char foo[] = "test string";
    const char* p = std::char_traits<char>::find(foo, std::char_traits<char>::length(foo), 'i');
    if (p)
        std::cout << "the first 'i' in \"" << foo << "\" is at " << (p - foo) << ".\n";
    return 0;
}
