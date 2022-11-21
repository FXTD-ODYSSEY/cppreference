// cppreference link https://en.cppreference.com/w/cpp/string/basic_string_view/copy
#include <array>
#include <cstddef>
#include <iostream>
#include <stdexcept>
#include <string_view>

int main()
{
    constexpr std::basic_string_view<char> source { "ABCDEF" };
    std::array<char, 8> dest;
    std::size_t count {}, pos {};

    dest.fill('\0');
    source.copy(dest.data(), count = 4); // pos = 0
    std::cout << dest.data() << '\n'; // ABCD

    dest.fill('\0');
    source.copy(dest.data(), count = 4, pos = 1);
    std::cout << dest.data() << '\n'; // BCDE

    dest.fill('\0');
    source.copy(dest.data(), count = 42, pos = 2); // ok, count -> 4
    std::cout << dest.data() << '\n'; // CDEF

    try {
        source.copy(dest.data(), count = 1, pos = 666); // throws: pos > size()
    } catch (std::out_of_range const& ex) {
        std::cout << ex.what() << '\n';
    }
}
