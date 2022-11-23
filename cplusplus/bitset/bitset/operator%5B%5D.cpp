// cplusplus link https://cplusplus.com/reference/bitset\bitset\operator%5B%5D
// bitset::operator[]
#include <bitset> // std::bitset
#include <iostream> // std::cout

int main()
{
    std::bitset<4> foo;

    foo[1] = 1; // 0010
    foo[2] = foo[1]; // 0110

    std::cout << "foo: " << foo << '\n';

    return 0;
}
