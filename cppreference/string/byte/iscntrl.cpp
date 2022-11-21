// cppreference link https://en.cppreference.com/w/cpp/string/byte/iscntrl
#include <cctype>
#include <clocale>
#include <iostream>

int main()
{
    unsigned char c = '\x94'; // the control code CCH in ISO-8859-1

    std::cout << "iscntrl(\'\\x94\', default C locale) returned "
              << std::boolalpha << (bool)std::iscntrl(c) << '\n';

    std::setlocale(LC_ALL, "en_GB.iso88591");
    std::cout << "iscntrl(\'\\x94\', ISO-8859-1 locale) returned "
              << std::boolalpha << (bool)std::iscntrl(c) << '\n';
}
