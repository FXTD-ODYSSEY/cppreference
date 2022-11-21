// cppreference link https://en.cppreference.com/w/cpp/locale/isalnum
#include <iostream>
#include <locale>
int main()
{
    const wchar_t c = L'\u2135'; // mathematical symbol aleph

    std::locale loc1("C");
    std::cout << "isalnum('ℵ', C locale) returned "
              << std::boolalpha << std::isalnum(c, loc1) << '\n';

    std::locale loc2("en_US.UTF-8");
    std::cout << "isalnum('ℵ', Unicode locale) returned "
              << std::boolalpha << std::isalnum(c, loc2) << '\n';
}
