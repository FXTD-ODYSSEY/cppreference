// cppreference link https://en.cppreference.com/w/cpp/types/numeric_limits/denorm_min
#include <cassert>
#include <cstdint>
#include <cstring>
#include <iostream>
#include <limits>

int main()
{
    // the smallest subnormal value has sign bit = 0, exponent = 0
    // and only the least significant bit of the fraction is 1
    std::uint32_t denorm_bits = 0x0001;
    float denorm_float;
    std::memcpy(&denorm_float, &denorm_bits, sizeof(float));

    assert(denorm_float == std::numeric_limits<float>::denorm_min());

    std::cout << "float\tmin()\t\tdenorm_min()\n";
    std::cout << "\t" << std::numeric_limits<float>::min() << '\t';
    std::cout << std::numeric_limits<float>::denorm_min() << '\n';

    std::cout << "double\tmin()\t\tdenorm_min()\n";
    std::cout << "\t" << std::numeric_limits<double>::min() << '\t';
    std::cout << std::numeric_limits<double>::denorm_min() << '\n';
}
