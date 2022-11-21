// cppreference link https://en.cppreference.com/w/cpp/numeric/popcount
#include <bit>
#include <bitset>
#include <cstdint>
#include <iostream>

int main()
{
    for (const std::uint8_t i : { 0, 0b11111111, 0b00011101 }) {
        std::cout << "popcount( " << std::bitset<8>(i) << " ) = "
                  << std::popcount(i) << '\n';
    }
}
