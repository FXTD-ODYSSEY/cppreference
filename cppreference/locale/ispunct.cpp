// cppreference link https://en.cppreference.com/w/cpp/locale/ispunct
#include <iostream>
#include <locale>
int main()
{
    const wchar_t c = L'\u214b'; // upside-down ampersand

    std::locale loc1("C");
    std::cout << "ispunct('⅋', C locale) returned "
              << std::boolalpha << std::ispunct(c, loc1) << '\n';

    std::locale loc2("en_US.UTF-8");
    std::cout << "ispunct('⅋', Unicode locale) returned "
              << std::boolalpha << std::ispunct(c, loc2) << '\n';
}
