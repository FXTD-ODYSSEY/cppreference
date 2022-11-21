// cppreference link https://en.cppreference.com/w/cpp/algorithm/ranges/search
#include <algorithm>
#include <cctype>
#include <iostream>
#include <iterator>
#include <string_view>

using namespace std::literals;

void print(int id, const auto& haystack, const auto& needle, const auto& found)
{
    std::cout << id << "). search(\"" << haystack << "\", \"" << needle << "\"); ";
    const auto first = std::distance(haystack.begin(), found.begin());
    const auto last = std::distance(haystack.begin(), found.end());
    if (found.empty()) {
        std::cout << "not found;";
    } else {
        std::cout << "found: \"";
        for (const auto x : found) {
            std::cout << x;
        }
        std::cout << "\";";
    }
    std::cout << " subrange: {" << first << ", " << last << "}\n";
}

int main()
{
    constexpr auto haystack { "abcd abcd"sv };
    constexpr auto needle { "bcd"sv };

    // the search uses iterator pairs begin()/end():
    constexpr auto found1 = std::ranges::search(
        haystack.begin(), haystack.end(),
        needle.begin(), needle.end());
    print(1, haystack, needle, found1);

    // the search uses ranges r1, r2:
    constexpr auto found2 = std::ranges::search(haystack, needle);
    print(2, haystack, needle, found2);

    // 'needle' range is empty:
    constexpr auto none { ""sv };
    constexpr auto found3 = std::ranges::search(haystack, none);
    print(3, haystack, none, found3);

    // 'needle' will not be found:
    constexpr auto awl { "efg"sv };
    constexpr auto found4 = std::ranges::search(haystack, awl);
    print(4, haystack, awl, found4);

    // the search uses custom comparator and projections:
    constexpr auto bodkin { "234"sv };
    auto found5 = std::ranges::search(
        haystack, bodkin,
        [](const int x, const int y) { return x == y; }, // pred
        [](const int x) { return std::toupper(x); }, // proj1
        [](const int y) { return y + 'A' - '1'; } // proj2
    );
    print(5, haystack, bodkin, found5);
}
