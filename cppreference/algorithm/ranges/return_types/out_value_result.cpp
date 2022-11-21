// cppreference link https://en.cppreference.com/w/cpp/algorithm/ranges/return_types/out_value_result
#include <algorithm>
#include <array>
#include <cassert>
#include <numeric>
#include <ranges>

int main()
{
    std::array<int, 4> a;
    constexpr std::array expected { 2, 3, 4, 5 };
    const auto result = std::ranges::iota(a, 2);
    assert(std::ranges::distance(a.cbegin(), result.out) == 4);
    assert(result.value == 6);
    assert(a == expected);
}
