// cplusplus link https://cplusplus.com/reference/bitset\bitset\set
// bitset::set
#include <bitset> // std::bitset
#include <iostream> // std::cout

int main()
{
    std::bitset<4> foo;

    std::cout << foo.set() << '\n'; // 1111
    std::cout << foo.set(2, 0) << '\n'; // 1011
    std::cout << foo.set(2) << '\n'; // 1111

    return 0;
}
