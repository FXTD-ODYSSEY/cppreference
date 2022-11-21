// cppreference link https://en.cppreference.com/w/cpp/locale/use_facet
#include <iostream>
#include <locale>

int main()
{
    for (const char* name : { "en_US.UTF-8", "de_DE.UTF-8", "en_GB.UTF-8" }) {
        std::locale loc = std::locale(name); // user's preferred locale
        std::cout << "Your currency string is "
                  << std::use_facet<std::moneypunct<char, true>>(loc).curr_symbol() << '\n';
    }
}
