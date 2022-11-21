// cppreference link https://en.cppreference.com/w/cpp/string/wide/iswupper
#include <clocale>
#include <cwctype>
#include <iostream>

int main()
{
    wchar_t c = L'\u053d'; // Armenian capital letter xeh ('Խ')

    std::cout << std::hex << std::showbase << std::boolalpha;
    std::cout << "in the default locale, iswupper(" << (std::wint_t)c << ") = "
              << (bool)std::iswupper(c) << '\n';
    std::setlocale(LC_ALL, "en_US.utf8");
    std::cout << "in Unicode locale, iswupper(" << (std::wint_t)c << ") = "
              << (bool)std::iswupper(c) << '\n';
}
