// cppreference link https://en.cppreference.com/w/cpp/locale/ctype_byname_char
#include <iostream>
#include <locale>

int main()
{
    char c = '\xde'; // capital letter thorn

    std::locale loc("C");

    std::cout << "isupper('Þ', C locale) returned "
              << std::boolalpha << std::isupper(c, loc) << '\n';

    loc = std::locale(loc, new std::ctype_byname<char>("en_US.utf8"));

    std::cout << "isupper('Þ', C locale with Unicode ctype<char>) returned "
              << std::boolalpha << std::isupper(c, loc) << '\n';

    loc = std::locale(loc, new std::ctype_byname<char>("is_IS.iso88591"));

    std::cout << "isupper('Þ', C locale with Islandic ctype<char>) returned "
              << std::boolalpha << std::isupper(c, loc) << '\n';
}
