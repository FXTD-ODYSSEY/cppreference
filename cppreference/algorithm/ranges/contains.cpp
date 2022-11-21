// cppreference link https://en.cppreference.com/w/cpp/algorithm/ranges/contains
#include <algorithm>
#include <array>

int main()
{
    constexpr auto haystack = std::array { 3, 1, 4, 1, 5 };
    constexpr auto needle = std::array { 1, 4, 1 };
    constexpr auto bodkin = std::array { 2, 5, 2 };
    auto increment = [](int x) { return ++x; };
    auto decrement = [](int x) { return --x; };

    static_assert(
        std::ranges::contains(haystack, 4) and not std::ranges::contains(haystack, 6) and std::ranges::contains_subrange(haystack, needle) and not std::ranges::contains_subrange(haystack, bodkin) and std::ranges::contains(haystack, 6, increment) and not std::ranges::contains(haystack, 1, increment) and std::ranges::contains_subrange(haystack, bodkin, {}, increment) and not std::ranges::contains_subrange(haystack, bodkin, {}, decrement) and std::ranges::contains_subrange(haystack, bodkin, {}, {}, decrement));
}
