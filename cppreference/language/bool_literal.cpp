// cppreference link https://en.cppreference.com/w/cpp/language/bool_literal
#include <iostream>

int main()
{
    std::cout << std::boolalpha
              << true << '\n'
              << false << '\n'
              << std::noboolalpha
              << true << '\n'
              << false << '\n';
}
