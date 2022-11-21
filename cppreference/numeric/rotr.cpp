// cppreference link https://en.cppreference.com/w/cpp/numeric/rotr
#include <bit>
#include <bitset>
#include <cstdint>
#include <iostream>

int main()
{
    const std::uint8_t i = 0b00011101;
    std::cout << "i          = " << std::bitset<8>(i) << '\n';
    std::cout << "rotr(i,0)  = " << std::bitset<8>(std::rotr(i, 0)) << '\n';
    std::cout << "rotr(i,1)  = " << std::bitset<8>(std::rotr(i, 1)) << '\n';
    std::cout << "rotr(i,9)  = " << std::bitset<8>(std::rotr(i, 9)) << '\n';
    std::cout << "rotr(i,-1) = " << std::bitset<8>(std::rotr(i, -1)) << '\n';
}
