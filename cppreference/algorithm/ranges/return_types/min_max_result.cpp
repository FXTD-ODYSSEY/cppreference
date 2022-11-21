// cppreference link https://en.cppreference.com/w/cpp/algorithm/ranges/return_types/min_max_result
#include <algorithm>
#include <ranges>

int main()
{
    constexpr static auto v = { 3, 1, 4, 1, 5, 9, 2 };
    {
        constexpr auto result = std::ranges::minmax(v);
        static_assert(1 == result.min && 9 == result.max);
    }
    {
        constexpr auto result = std::ranges::minmax_element(v);
        static_assert(1 == *result.min && 9 == *result.max);
    }
}
