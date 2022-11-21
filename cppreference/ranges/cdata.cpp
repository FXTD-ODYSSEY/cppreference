// cppreference link https://en.cppreference.com/w/cpp/ranges/cdata
#include <cstring>
#include <iostream>
#include <ranges>
#include <string>

int main()
{
    std::string src { "hello world!\n" };

    //  std::ranges::cdata(src)[0] = 'H'; // error, src.data() is treated as read-only
    std::ranges::data(src)[0] = 'H'; // OK, src.data() is a non-const storage

    char dst[20]; // storage for a C-style string
    std::strcpy(dst, std::ranges::cdata(src));
    // [data(src), data(src) + size(src)] is guaranteed to be an NTBS

    std::cout << dst;
}
