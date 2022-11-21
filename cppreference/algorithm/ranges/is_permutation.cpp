// cppreference link https://en.cppreference.com/w/cpp/algorithm/ranges/is_permutation
#include <algorithm>
#include <array>
#include <cmath>
#include <iostream>
#include <ranges>

auto& operator<<(auto& os, std::ranges::forward_range auto const& v)
{
    os << "{ ";
    for (auto const& e : v)
        os << e << ' ';
    return os << "}";
}

int main()
{
    static constexpr auto r1 = { 1, 2, 3, 4, 5 };
    static constexpr auto r2 = { 3, 5, 4, 1, 2 };
    static constexpr auto r3 = { 3, 5, 4, 1, 1 };

    static_assert(
        std::ranges::is_permutation(r1, r1) && std::ranges::is_permutation(r1, r2) && std::ranges::is_permutation(r2, r1) && std::ranges::is_permutation(r1.begin(), r1.end(), r2.begin(), r2.end()));

    std::cout
        << std::boolalpha
        << "is_permutation( " << r1 << ", " << r2 << " ): "
        << std::ranges::is_permutation(r1, r2) << '\n'
        << "is_permutation( " << r1 << ", " << r3 << " ): "
        << std::ranges::is_permutation(r1, r3) << '\n'

        << "is_permutation with custom predicate and projections: "
        << std::ranges::is_permutation(
               std::array { -14, -11, -13, -15, -12 }, // 1st range
               std::array { 'F', 'E', 'C', 'B', 'D' }, // 2nd range
               [](int x, int y) { return abs(x) == abs(y); }, // predicate
               [](int x) { return x + 10; }, // projection for 1st range
               [](char y) { return int(y - 'A'); }) // projection for 2nd range
        << '\n';
}
