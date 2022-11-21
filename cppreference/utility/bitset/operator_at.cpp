// cppreference link https://en.cppreference.com/w/cpp/utility/bitset/operator_at
#include <bitset>
#include <iostream>

int main()
{
    std::bitset<8> b1 { 0b00101010 }; // binary literal for 42

    for (std::size_t i = 0; i < b1.size(); ++i) {
        std::cout << "b1[" << i << "]: " << b1[i] << '\n';
    }
    b1[0] = true; // modifies the first bit through bitset::reference

    std::cout << "After setting bit 0, b1 holds " << b1 << '\n';
}
