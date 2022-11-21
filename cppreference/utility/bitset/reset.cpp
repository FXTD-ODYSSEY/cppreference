// cppreference link https://en.cppreference.com/w/cpp/utility/bitset/reset
#include <bitset>
#include <iostream>

int main()
{
    std::bitset<8> b(42);
    std::cout << "Bitset is         " << b << '\n';
    b.reset(1);
    std::cout << "After b.reset(1): " << b << '\n';
    b.reset();
    std::cout << "After b.reset():  " << b << '\n';
}
