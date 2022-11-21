// cppreference link https://en.cppreference.com/w/cpp/string/byte/islower
#include <cctype>
#include <clocale>
#include <iostream>

int main()
{
    unsigned char c = '\xe5'; // letter å in ISO-8859-1

    std::cout << "islower(\'\\xe5\', default C locale) returned "
              << std::boolalpha << (bool)std::islower(c) << '\n';

    std::setlocale(LC_ALL, "en_GB.iso88591");
    std::cout << "islower(\'\\xe5\', ISO-8859-1 locale) returned "
              << std::boolalpha << (bool)std::islower(c) << '\n';
}
