// cppreference link https://en.cppreference.com/w/cpp/numeric/bit_floor
#include <bit>
#include <bitset>
#include <iostream>

int main()
{
    using bin = std::bitset<8>;

    for (unsigned x = 0; x != 10; ++x) {
        auto const z = std::bit_floor(x); // `floor2` before P1956R1

        std::cout << "bit_floor( " << bin(x) << " ) = " << bin(z) << '\n';
    }
}
