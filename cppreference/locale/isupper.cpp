// cppreference link https://en.cppreference.com/w/cpp/locale/isupper
#include <iostream>
#include <locale>
int main()
{
    const wchar_t c = L'\u00de'; // capital letter thorn

    std::locale loc1("C");
    std::cout << "isupper('Þ', C locale) returned "
              << std::boolalpha << std::isupper(c, loc1) << '\n';

    std::locale loc2("en_US.UTF8");
    std::cout << "isupper('Þ', Unicode locale) returned "
              << std::boolalpha << std::isupper(c, loc2) << '\n';
}
