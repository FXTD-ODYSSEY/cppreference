// cppreference link https://en.cppreference.com/w/cpp/algorithm/clamp
#include <algorithm>
#include <cstdint>
#include <iomanip>
#include <iostream>

int main()
{
    std::cout << " raw   clamped to int8_t   clamped to uint8_t\n";
    for (int const v : { -129, -128, -1, 0, 42, 127, 128, 255, 256 }) {
        std::cout << std::setw(04) << v
                  << std::setw(20) << std::clamp(v, INT8_MIN, INT8_MAX)
                  << std::setw(21) << std::clamp(v, 0, UINT8_MAX) << '\n';
    }
}
