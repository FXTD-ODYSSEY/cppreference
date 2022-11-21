// cppreference link https://en.cppreference.com/w/cpp/regex/regex_traits/length
#include <iostream>
#include <regex>

int main()
{
    std::cout << std::regex_traits<char>::length(u8"Кошка") << '\n'
              << std::regex_traits<wchar_t>::length(L"Кошка") << '\n';
}
