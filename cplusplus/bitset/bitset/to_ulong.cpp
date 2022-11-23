// cplusplus link https://cplusplus.com/reference/bitset\bitset\to_ulong
// bitset::to_ulong
#include <bitset> // std::bitset
#include <iostream> // std::cout

int main()
{
    std::bitset<4> foo; // foo: 0000
    foo.set(); // foo: 1111

    std::cout << foo << " as an integer is: " << foo.to_ulong() << '\n';

    return 0;
}
