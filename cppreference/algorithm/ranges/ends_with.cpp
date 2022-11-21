// cppreference link https://en.cppreference.com/w/cpp/algorithm/ranges/ends_with
#include <algorithm>
#include <array>
#include <iostream>

int main()
{
    std::cout
        << std::boolalpha
        << std::ranges::ends_with("static_cast", "cast") << '\n'
        << std::ranges::ends_with("const_cast", "cast") << '\n'
        << std::ranges::ends_with("reinterpret_cast", "cast") << '\n'
        << std::ranges::ends_with("dynamic_cast", "cast") << '\n'
        << std::ranges::ends_with("move", "cast") << '\n'
        << std::ranges::ends_with("move_if_noexcept", "cast") << '\n'
        << std::ranges::ends_with("forward", "cast") << '\n';
    static_assert(
        !std::ranges::ends_with("as_const", "cast") and !!std::ranges::ends_with("bit_cast", "cast") and !std::ranges::ends_with("to_underlying", "cast") and !!std::ranges::ends_with(std::array { 1, 2, 3, 4 }, std::array { 3, 4 }) and !std::ranges::ends_with(std::array { 1, 2, 3, 4 }, std::array { 4, 5 }));
}
