// cppreference link https://en.cppreference.com/w/cpp/language/ascii
#include <iostream>
int main()
{
    std::cout << "Printable ASCII [32..126]:\n";
    for (char c { ' ' }; c <= '~'; c++) {
        std::cout << c << ((c + 1) % 32 ? ' ' : '\n');
    }
}
