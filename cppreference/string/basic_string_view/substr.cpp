// cppreference link https://en.cppreference.com/w/cpp/string/basic_string_view/substr
#include <cstddef>
#include <iostream>
#include <stdexcept>
#include <string_view>

int main()
{
    typedef std::size_t count_t, pos_t;

    constexpr std::string_view data { "ABCDEF" };

    std::cout << data.substr() << '\n'; // ABCDEF
    std::cout << data.substr(pos_t(1)) << '\n'; // BCDEF
    std::cout << data.substr(pos_t(2), count_t(3)) << '\n'; // CDE

    std::cout << data.substr(pos_t(4), count_t(42)) << '\n'; // EF
                                                             // count -> 2 == size() - pos == 6 - 4

    try {
        data.substr(pos_t(666), count_t(1)); // throws: pos > size()
    } catch (std::out_of_range const& ex) {
        std::cout << ex.what() << '\n';
    }
}
