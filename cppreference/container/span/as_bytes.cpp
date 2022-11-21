// cppreference link https://en.cppreference.com/w/cpp/container/span/as_bytes
#include <cstddef>
#include <iomanip>
#include <iostream>
#include <span>

void print(float const x, std::span<const std::byte> const bytes)
{
    std::cout << std::setprecision(6) << std::setw(8) << x << " = { "
              << std::hex << std::uppercase << std::setfill('0');
    for (auto const b : bytes) {
        std::cout << std::setw(2) << std::to_integer<int>(b) << ' ';
    }
    std::cout << std::dec << "}\n";
}

int main()
{
    /* mutable */ float data[1] { 3.141592f };

    auto const const_bytes = std::as_bytes(std::span { data });

    print(data[0], const_bytes);

    auto const writable_bytes = std::as_writable_bytes(std::span { data });

    // Change the sign bit that is the MSB (IEEE 754 Floating-Point Standard).
    writable_bytes[3] |= std::byte { 0b1000'0000 };

    print(data[0], const_bytes);
}
