// cppreference link https://en.cppreference.com/w/cpp/numeric/countl_one
#include <bit>
#include <bitset>
#include <cstdint>
#include <iostream>

int main()
{
    for (const std::uint8_t i : { 0, 0b11111111, 0b01111111, 0b11100011 }) {
        std::cout << "countl_one( " << std::bitset<8>(i) << " ) = "
                  << std::countl_one(i) << '\n';
    }
}
