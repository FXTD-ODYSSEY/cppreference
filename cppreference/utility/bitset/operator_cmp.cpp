// cppreference link https://en.cppreference.com/w/cpp/utility/bitset/operator_cmp
#include <bitset>
#include <iostream>

int main()
{
    std::bitset<4> b1(0b0011);
    std::bitset<4> b2(b1);
    std::bitset<4> b3(0b0100);

    std::cout << std::boolalpha;
    std::cout << "b1 == b2: " << (b1 == b2) << '\n';
    std::cout << "b1 == b3: " << (b1 == b3) << '\n';
    std::cout << "b1!= b3: " << (b1 != b3) << '\n';

    //  b1 == std::bitset<3>{}; // compile-time error: incompatible types
}
