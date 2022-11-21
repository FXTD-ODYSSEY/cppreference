// cppreference link https://en.cppreference.com/w/cpp/string/wide/towupper
#include <clocale>
#include <cwctype>
#include <iostream>

int main()
{
    wchar_t c = L'\u017f'; // Latin small letter Long S ('ſ')

    std::cout << std::hex << std::showbase;
    std::cout << "in the default locale, towupper(" << (std::wint_t)c << ") = "
              << std::towupper(c) << '\n';
    std::setlocale(LC_ALL, "en_US.utf8");
    std::cout << "in Unicode locale, towupper(" << (std::wint_t)c << ") = "
              << std::towupper(c) << '\n';
}
