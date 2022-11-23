// cplusplus link https://cplusplus.com/reference/bitset\bitset\to_ullong
// bitset::to_ullong
#include <bitset> // std::bitset
#include <iostream> // std::cout

int main()
{
    std::bitset<4> foo; // foo: 0000
    foo.set(); // foo: 1111

    std::cout << foo << " as an integer is: " << foo.to_ullong() << '\n';

    return 0;
}
