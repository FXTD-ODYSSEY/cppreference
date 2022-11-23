// cplusplus link https://cplusplus.com/reference/bitset\bitset\bitset
// constructing bitsets
#include <bitset> // std::bitset
#include <iostream> // std::cout
#include <string> // std::string

int main()
{
    std::bitset<16> foo;
    std::bitset<16> bar(0xfa2);
    std::bitset<16> baz(std::string("0101111001"));

    std::cout << "foo: " << foo << '\n';
    std::cout << "bar: " << bar << '\n';
    std::cout << "baz: " << baz << '\n';

    return 0;
}
