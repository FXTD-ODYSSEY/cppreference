// cppreference link https://en.cppreference.com/w/cpp/locale/tolower
#include <cwctype>
#include <iostream>
#include <locale>

int main()
{
    wchar_t c = L'\u0190'; // Latin capital open E ('Ɛ')

    std::cout << std::hex << std::showbase;

    std::cout << "in the default locale, tolower(" << (std::wint_t)c << ") = "
              << std::tolower(c, std::locale()) << '\n';

    std::cout << "in Unicode locale, tolower(" << (std::wint_t)c << ") = "
              << std::tolower(c, std::locale("en_US.utf8")) << '\n';
}
