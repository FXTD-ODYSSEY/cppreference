// cppreference link https://en.cppreference.com/w/cpp/algorithm/ranges/unique_copy
#include <algorithm>
#include <cmath>
#include <iostream>
#include <iterator>
#include <list>
#include <string>
#include <type_traits>

void print(const auto& rem, const auto& v)
{
    using V = std::remove_cvref_t<decltype(v)>;
    constexpr bool sep { std::is_same_v<typename V::value_type, int> };
    std::cout << rem << std::showpos;
    for (const auto& e : v)
        std::cout << e << (sep ? " " : "");
    std::cout << '\n';
}

int main()
{
    std::string s1 { "The      string    with many       spaces!" };
    print("s1: ", s1);

    std::string s2;
    std::ranges::unique_copy(
        s1.begin(), s1.end(), std::back_inserter(s2),
        [](char c1, char c2) { return c1 == ' ' && c2 == ' '; });
    print("s2: ", s2);

    const auto v1 = {
        -1,
        +1,
        +2,
        -2,
        -3,
        +3,
        -3,
    };
    print("v1: ", v1);
    std::list<int> v2;
    std::ranges::unique_copy(
        v1, std::back_inserter(v2),
        {}, // default comparator std::ranges::equal_to
        [](int x) { return std::abs(x); } // projection
    );
    print("v2: ", v2);
}
