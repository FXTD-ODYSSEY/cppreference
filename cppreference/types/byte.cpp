// cppreference link https://en.cppreference.com/w/cpp/types/byte
#include <bitset>
#include <cstddef>
#include <iostream>

std::ostream& operator<<(std::ostream& os, std::byte b)
{
    return os << std::bitset<8>(std::to_integer<int>(b));
}

int main()
{
    std::byte b { 42 };
    std::cout << "1. " << b << '\n';

    // b *= 2 compilation error
    b <<= 1;
    std::cout << "2. " << b << '\n';

    b >>= 1;
    std::cout << "3. " << b << '\n';

    std::cout << "4. " << (b << 1) << '\n';
    std::cout << "5. " << (b >> 1) << '\n';

    b |= std::byte { 0b11110000 };
    std::cout << "6. " << b << '\n';

    b &= std::byte { 0b11110000 };
    std::cout << "7. " << b << '\n';

    b ^= std::byte { 0b11111111 };
    std::cout << "8. " << b << '\n';
}
