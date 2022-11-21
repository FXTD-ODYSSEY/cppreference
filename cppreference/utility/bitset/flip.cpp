// cppreference link https://en.cppreference.com/w/cpp/utility/bitset/flip
#include <bitset>
#include <iostream>

int main()
{
    std::bitset<4> flops;

    std::cout << flops << '\n'
              << flops.flip(0) << '\n'
              << flops.flip(2) << '\n'
              << flops.flip() << '\n';
}
