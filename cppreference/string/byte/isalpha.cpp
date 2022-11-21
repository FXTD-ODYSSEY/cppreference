// cppreference link https://en.cppreference.com/w/cpp/string/byte/isalpha
#include <cctype>
#include <clocale>
#include <iostream>

int main()
{
    unsigned char c = '\xdf'; // German letter ß in ISO-8859-1

    std::cout << "isalpha(\'\\xdf\', default C locale) returned "
              << std::boolalpha << (bool)std::isalpha(c) << '\n';

    std::setlocale(LC_ALL, "de_DE.iso88591");
    std::cout << "isalpha(\'\\xdf\', ISO-8859-1 locale) returned "
              << std::boolalpha << (bool)std::isalpha(c) << '\n';
}
