// cppreference link https://en.cppreference.com/w/cpp/string/byte/isgraph
#include <cctype>
#include <clocale>
#include <iostream>

int main()
{
    unsigned char c = '\xb6'; // the character ¶ in ISO-8859-1

    std::cout << "isgraph(\'\\xb6\', default C locale) returned "
              << std::boolalpha << (bool)std::isgraph(c) << '\n';

    std::setlocale(LC_ALL, "en_GB.iso88591");
    std::cout << "isgraph(\'\\xb6\', ISO-8859-1 locale) returned "
              << std::boolalpha << (bool)std::isgraph(c) << '\n';
}
