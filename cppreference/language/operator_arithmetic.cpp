// cppreference link https://en.cppreference.com/w/cpp/language/operator_arithmetic
#include <iostream>

enum { ONE = 1,
    TWO = 2 };

int main()
{
    std::cout << std::hex << std::showbase;
    char c = 0x10;
    unsigned long long ull = 0x123;
    std::cout << "0x123 << 1 = " << (ull << 1) << '\n'
              << "0x123 << 63 = " << (ull << 63) << '\n' // overflow in unsigned
              << "0x10 << 10 = " << (c << 10) << '\n'; // char is promoted to int
    long long ll = -1000;
    std::cout << std::dec << "-1000 >> 1 = " << (ll >> ONE) << '\n';
}
