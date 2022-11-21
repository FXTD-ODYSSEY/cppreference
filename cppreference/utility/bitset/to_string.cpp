// cppreference link https://en.cppreference.com/w/cpp/utility/bitset/to_string
#include <bitset>
#include <iostream>
int main()
{
    std::bitset<8> b(42);
    std::cout << b.to_string() << '\n'
              << b.to_string('*') << '\n'
              << b.to_string('O', 'X') << '\n';
}
