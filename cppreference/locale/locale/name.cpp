// cppreference link https://en.cppreference.com/w/cpp/locale/locale/name
#include <iostream>
#include <locale>
#include <string>

int main()
{
    std::locale loc(std::locale(), new std::ctype<char>);
    std::cout << "The default locale is " << std::locale().name() << '\n'
              << "The user's locale is " << std::locale("").name() << '\n'
              << "A nameless locale is " << loc.name() << '\n';
}
