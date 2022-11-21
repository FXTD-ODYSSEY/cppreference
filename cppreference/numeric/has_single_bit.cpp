// cppreference link https://en.cppreference.com/w/cpp/numeric/has_single_bit
#include <bit>
#include <bitset>
#include <iostream>

int main()
{
    std::cout << std::boolalpha;
    for (auto u = 0u; u != 10u; ++u) {
        std::cout << "has_single_bit( " << std::bitset<4>(u) << " ) = "
                  << std::has_single_bit(u) // `ispow2` before P1956R1
                  << '\n';
    }
}
