// cppreference link https://en.cppreference.com/w/cpp/numeric/countr_zero
#include <bit>
#include <bitset>
#include <cstdint>
#include <iostream>

int main()
{
    for (const std::uint8_t i : { 0, 0b11111111, 0b00011100, 0b00011101 }) {
        std::cout << "countr_zero( " << std::bitset<8>(i) << " ) = "
                  << std::countr_zero(i) << '\n';
    }
}
