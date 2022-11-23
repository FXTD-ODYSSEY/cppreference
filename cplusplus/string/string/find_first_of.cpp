// cplusplus link https://cplusplus.com/reference/string\string\find_first_of
// string::find_first_of
#include <cstddef> // std::size_t
#include <iostream> // std::cout
#include <string> // std::string

int main()
{
    std::string str("Please, replace the vowels in this sentence by asterisks.");
    std::size_t found = str.find_first_of("aeiou");
    while (found != std::string::npos) {
        str[found] = '*';
        found = str.find_first_of("aeiou", found + 1);
    }

    std::cout << str << '\n';

    return 0;
}
