// cppreference link https://en.cppreference.com/w/cpp/string/wide/iswalpha
#include <clocale>
#include <cwctype>
#include <iostream>

int main()
{
    wchar_t c = L'\u0b83'; // Tamil sign Visarga ('ஃ')

    std::cout << std::hex << std::showbase << std::boolalpha;
    std::cout << "in the default locale, iswalpha(" << (std::wint_t)c << ") = "
              << (bool)std::iswalpha(c) << '\n';
    std::setlocale(LC_ALL, "en_US.utf8");
    std::cout << "in Unicode locale, iswalpha(" << (std::wint_t)c << ") = "
              << (bool)std::iswalpha(c) << '\n';
}
