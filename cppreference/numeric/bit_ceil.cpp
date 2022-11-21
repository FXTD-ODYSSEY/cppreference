// cppreference link https://en.cppreference.com/w/cpp/numeric/bit_ceil
#include <bit>
#include <bitset>
#include <iostream>

auto main() -> signed int //:()
{
    using bin = std::bitset<8>;

    for (unsigned x { 0 }; x != 10; ++x) {
        unsigned const z = std::bit_ceil(x); // `ceil2` before P1956R1

        std::cout << "bit_ceil( " << bin(x) << " ) = " << bin(z) << '\n';
    }
}
