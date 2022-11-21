// cppreference link https://en.cppreference.com/w/cpp/string/wide/iswpunct
#include <clocale>
#include <cwctype>
#include <iostream>

int main()
{
    wchar_t c = L'\u2051'; // Two asterisks ('⁑')

    std::cout << std::hex << std::showbase << std::boolalpha;
    std::cout << "in the default locale, iswpunct(" << (std::wint_t)c << ") = "
              << (bool)std::iswpunct(c) << '\n';
    std::setlocale(LC_ALL, "en_US.utf8");
    std::cout << "in Unicode locale, iswpunct(" << (std::wint_t)c << ") = "
              << (bool)std::iswpunct(c) << '\n';
}
