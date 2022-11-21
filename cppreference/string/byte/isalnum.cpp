// cppreference link https://en.cppreference.com/w/cpp/string/byte/isalnum
#include <cctype>
#include <clocale>
#include <iostream>

int main()
{
    unsigned char c = '\xdf'; // German letter ß in ISO-8859-1

    std::cout << "isalnum(\'\\xdf\', default C locale) returned "
              << std::boolalpha << (bool)std::isalnum(c) << '\n';

    if (std::setlocale(LC_ALL, "de_DE.iso88591"))
        std::cout << "isalnum(\'\\xdf\', ISO-8859-1 locale) returned "
                  << std::boolalpha << (bool)std::isalnum(c) << '\n';
}
