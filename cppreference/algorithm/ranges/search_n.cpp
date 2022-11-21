// cppreference link https://en.cppreference.com/w/cpp/algorithm/ranges/search_n
#include <algorithm>
#include <iomanip>
#include <iostream>
#include <string>

int main()
{
    static constexpr auto nums = { 1, 2, 2, 3, 4, 1, 2, 2, 2, 1 };
    constexpr int count { 3 };
    constexpr int value { 2 };

    constexpr auto result1 = std::ranges::search_n(
        nums.begin(), nums.end(), count, value);
    static_assert( // found
        result1.size() == count && std::distance(nums.begin(), result1.begin()) == 6 && std::distance(nums.begin(), result1.end()) == 9);

    constexpr auto result2 = std::ranges::search_n(nums, count, value);
    static_assert( // found
        result2.size() == count && std::distance(nums.begin(), result2.begin()) == 6 && std::distance(nums.begin(), result2.end()) == 9);

    constexpr auto result3 = std::ranges::search_n(nums, count, /* value */ 5);
    static_assert( // not found
        result3.size() == 0 && result3.begin() == result3.end() && result3.end() == nums.end());

    constexpr auto result4 = std::ranges::search_n(nums, /* count */ 0, /* value */ 1);
    static_assert( // not found
        result4.size() == 0 && result4.begin() == result4.end() && result4.end() == nums.begin());

    constexpr char symbol { 'B' };
    std::cout << std::boolalpha << "Find a sub-sequence: "
              << std::quoted(std::string(count, symbol)) << '\n';

    auto result5 = std::ranges::search_n(
        nums, count, symbol,
        [](const char x, const char y) { // binary predicate
            const bool o { x == y };
            std::cout << "bin_op(" << x << ", " << y << ") == " << o << "\n";
            return o;
        },
        [](const int z) { return 'A' + z - 1; } // projects nums -> ASCII
    );

    std::cout << "Found: " << !result5.empty() << '\n';
}
