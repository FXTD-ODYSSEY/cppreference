// cplusplus link https://cplusplus.com/reference/bitset\bitset\to_string
// bitset::to_string
#include <bitset> // std::bitset
#include <iostream> // std::cout
#include <string> // std::string

int main()
{
    std::bitset<4> mybits; // mybits: 0000
    mybits.set(); // mybits: 1111

    std::string mystring = mybits.to_string<char, std::string::traits_type, std::string::allocator_type>();

    std::cout << "mystring: " << mystring << '\n';

    return 0;
}
