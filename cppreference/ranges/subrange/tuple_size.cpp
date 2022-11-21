// cppreference link https://en.cppreference.com/w/cpp/ranges/subrange/tuple_size
#include <array>
#include <iostream>
#include <iterator>
#include <ranges>

int main()
{
    static_assert(2 == std::tuple_size_v<std::ranges::subrange<int*, int*>>);

    using array5 = std::array<int, 5>;

    static_assert(2 == std::tuple_size<std::ranges::subrange<array5::const_iterator, array5::const_iterator>> {});

    constexpr array5 a { 1, 2, 3, 4, 5 };

    std::ranges::subrange sub_a1 { a };

    for (std::cout << "sub_a1: { "; int e : sub_a1) {
        std::cout << e << ' ';
    }
    std::cout << "}\n";

    std::ranges::subrange sub_a2 { std::next(cbegin(a)), std::prev(cend(a)) };

    const auto [first, last] = sub_a2;
    std::cout << "sub_a2 size = " << std::distance(first, last) << '\n';

    for (std::cout << "sub_a2: { "; int e : sub_a2) {
        std::cout << e << ' ';
    }
    std::cout << "}\n";
}
