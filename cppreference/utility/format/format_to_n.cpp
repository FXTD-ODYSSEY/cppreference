// cppreference link https://en.cppreference.com/w/cpp/utility/format/format_to_n
#include <format>
#include <iostream>
#include <string_view>

int main()
{
    char buffer[64];

    const auto result = std::format_to_n(buffer, std::size(buffer) - 1,
        "Hubble's H{2} {3} {0}{4}{1} km/sec/Mpc.",
        71, // {0}, occupies 2 bytes
        8, // {1}, occupies 1 byte
        "\u2080", // {2}, occupies 3 bytes
        "\u2245", // {3}, occupies 3 bytes
        "\u00B1" // {4}, occupies 2 bytes
    );
    *result.out = '\0';

    const std::string_view str { buffer, result.out }; // uses C++20 ctor

    std::cout << "Buffer: \"" << str << "\"\n"
              << "Buffer size = " << std::size(buffer) << '\n'
              << "Untruncated output size = " << result.size << '\n';
}
