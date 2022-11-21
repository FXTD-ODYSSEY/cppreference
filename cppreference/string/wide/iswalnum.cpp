// cppreference link https://en.cppreference.com/w/cpp/string/wide/iswalnum
#include <clocale>
#include <cwctype>
#include <iostream>

int main()
{
    wchar_t c = L'\u13ad'; // the Cherokee letter HA ('Ꭽ')

    std::cout << std::hex << std::showbase << std::boolalpha;
    std::cout << "in the default locale, iswalnum(" << (std::wint_t)c << ") = "
              << (bool)std::iswalnum(c) << '\n';
    std::setlocale(LC_ALL, "en_US.utf8");
    std::cout << "in Unicode locale, iswalnum(" << (std::wint_t)c << ") = "
              << (bool)std::iswalnum(c) << '\n';
}
