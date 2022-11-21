// cppreference link https://en.cppreference.com/w/cpp/io/basic_ios/imbue
#include <iostream>
#include <locale>
#include <sstream>

int main()
{
    std::istringstream iss;
    iss.imbue(std::locale("en_US.UTF8"));

    std::cout << "Current locale: " << iss.getloc().name() << '\n';

    iss.imbue(std::locale());
    std::cout << "Global locale: " << iss.getloc().name() << '\n';
}
