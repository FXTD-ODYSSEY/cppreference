// cppreference link https://en.cppreference.com/w/cpp/locale/ctype_byname
#include <iostream>
#include <locale>

int main()
{
    wchar_t c = L'\u00de'; // capital letter thorn

    std::locale loc("C");

    std::cout << "isupper('Þ', C locale) returned "
              << std::boolalpha << std::isupper(c, loc) << '\n';

    loc = std::locale(loc, new std::ctype_byname<wchar_t>("en_US.utf8"));

    std::cout << "isupper('Þ', C locale with Unicode ctype) returned "
              << std::boolalpha << std::isupper(c, loc) << '\n';
}
