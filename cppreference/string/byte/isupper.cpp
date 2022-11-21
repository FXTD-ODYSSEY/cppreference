// cppreference link https://en.cppreference.com/w/cpp/string/byte/isupper
#include <cctype>
#include <clocale>
#include <iostream>

int main()
{
    unsigned char c = '\xc6'; // letter Æ in ISO-8859-1

    std::cout << "isupper(\'\\xc6\', default C locale) returned "
              << std::boolalpha << (bool)std::isupper(c) << '\n';

    std::setlocale(LC_ALL, "en_GB.iso88591");
    std::cout << "isupper(\'\\xc6\', ISO-8859-1 locale) returned "
              << std::boolalpha << (bool)std::isupper(c) << '\n';
}
