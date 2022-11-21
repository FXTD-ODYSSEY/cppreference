// cppreference link https://en.cppreference.com/w/cpp/numeric/countl_zero
#include <bit>
#include <bitset>
#include <cstdint>
#include <iostream>

int main()
{
    for (const std::uint8_t i : { 0, 0b11111111, 0b11110000, 0b00011110 }) {
        std::cout << "countl_zero( " << std::bitset<8>(i) << " ) = "
                  << std::countl_zero(i) << '\n';
    }
}
