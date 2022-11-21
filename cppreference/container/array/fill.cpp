// cppreference link https://en.cppreference.com/w/cpp/container/array/fill
#include <array>
#include <cstddef>
#include <iostream>

int main()
{
    constexpr std::size_t xy = 4;

    using Cell = std::array<unsigned char, 8>;

    std::array<Cell, xy * xy> board;

    board.fill({ { 0xE2, 0x96, 0x84, 0xE2, 0x96, 0x80, 0, 0 } }); // "▄▀";

    for (std::size_t count {}; Cell c : board) {
        std::cout << c.data() << ((++count % xy) ? "" : "\n");
    }
}
