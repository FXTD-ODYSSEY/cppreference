// cppreference link https://en.cppreference.com/w/cpp/algorithm/ranges/return_types/in_in_result
#include <algorithm>
#include <iostream>
#include <ranges>

int main()
{
    constexpr static auto in1 = { 1, 2, 3, 4 };
    constexpr static auto in2 = { 1, 2, 4, 5 };

    constexpr auto result { std::ranges::mismatch(in1, in2) };

    static_assert(2 == std::ranges::distance(in1.begin(), result.in1));
    static_assert(2 == std::ranges::distance(in2.begin(), result.in2));
}
