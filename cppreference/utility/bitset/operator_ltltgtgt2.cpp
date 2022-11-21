// cppreference link https://en.cppreference.com/w/cpp/utility/bitset/operator_ltltgtgt2
#include <bitset>
#include <iostream>
#include <sstream>

int main()
{
    std::string bit_string = "001101";
    std::istringstream bit_stream(bit_string);

    std::bitset<3> b1;
    bit_stream >> b1; // reads "001", stream still holds "101"
    std::cout << b1 << '\n';

    std::bitset<8> b2;
    bit_stream >> b2; // reads "101", populates the 8-bit set as "00000101"
    std::cout << b2 << '\n';
}
