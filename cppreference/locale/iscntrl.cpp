// cppreference link https://en.cppreference.com/w/cpp/locale/iscntrl
#include <iostream>
#include <locale>
int main()
{
    const wchar_t CCH = L'\u0094'; // Destructive Backspace in Unicode

    std::locale loc1("C");
    std::cout << "iscntrl(CCH, C locale) returned "
              << std::boolalpha << std::iscntrl(CCH, loc1) << '\n';

    std::locale loc2("en_US.UTF8");
    std::cout << "iscntrl(CCH, Unicode locale) returned "
              << std::boolalpha << std::iscntrl(CCH, loc2) << '\n';
}
