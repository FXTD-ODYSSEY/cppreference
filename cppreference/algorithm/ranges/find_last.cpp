// cppreference link https://en.cppreference.com/w/cpp/algorithm/ranges/find_last
#include <algorithm>
#include <forward_list>
#include <iomanip>
#include <iostream>
#include <string_view>

int main()
{
    constexpr static auto v = { 1, 2, 3, 1, 2, 3, 1, 2 };

    {
        constexpr auto i1 = std::ranges::find_last(v.begin(), v.end(), 3);
        constexpr auto i2 = std::ranges::find_last(v, 3);
        static_assert(std::ranges::distance(v.begin(), i1.begin()) == 5);
        static_assert(std::ranges::distance(v.begin(), i2.begin()) == 5);
    }
    {
        constexpr auto i1 = std::ranges::find_last(v.begin(), v.end(), -3);
        constexpr auto i2 = std::ranges::find_last(v, -3);
        static_assert(i1.begin() == v.end());
        static_assert(i2.begin() == v.end());
    }

    auto abs = [](int x) { return x < 0 ? -x : x; };

    {
        auto pred = [](int x) { return x == 3; };
        constexpr auto i1 = std::ranges::find_last_if(v.begin(), v.end(), pred, abs);
        constexpr auto i2 = std::ranges::find_last_if(v, pred, abs);
        static_assert(std::ranges::distance(v.begin(), i1.begin()) == 5);
        static_assert(std::ranges::distance(v.begin(), i2.begin()) == 5);
    }
    {
        auto pred = [](int x) { return x == -3; };
        constexpr auto i1 = std::ranges::find_last_if(v.begin(), v.end(), pred, abs);
        constexpr auto i2 = std::ranges::find_last_if(v, pred, abs);
        static_assert(i1.begin() == v.end());
        static_assert(i2.begin() == v.end());
    }

    {
        auto pred = [](int x) { return x == 1 or x == 2; };
        constexpr auto i1 = std::ranges::find_last_if_not(v.begin(), v.end(), pred, abs);
        constexpr auto i2 = std::ranges::find_last_if_not(v, pred, abs);
        static_assert(std::ranges::distance(v.begin(), i1.begin()) == 5);
        static_assert(std::ranges::distance(v.begin(), i2.begin()) == 5);
    }
    {
        auto pred = [](int x) { return x == 1 or x == 2 or x == 3; };
        constexpr auto i1 = std::ranges::find_last_if_not(v.begin(), v.end(), pred, abs);
        constexpr auto i2 = std::ranges::find_last_if_not(v, pred, abs);
        static_assert(i1.begin() == v.end());
        static_assert(i2.begin() == v.end());
    }

    using P = std::pair<std::string_view, int>;
    std::forward_list<P> list {
        { "one", 1 },
        { "two", 2 },
        { "three", 3 },
        { "one", 4 },
        { "two", 5 },
        { "three", 6 },
    };
    auto cmp_one = [](const std::string_view& s) { return s == "one"; };

    // find latest element that satisfy the comparator, and projecting pair::first
    const auto subrange = std::ranges::find_last_if(list, cmp_one, &P::first);

    // print the found element and the "tail" after it
    for (P const& e : subrange)
        std::cout << '{' << std::quoted(e.first) << ", " << e.second << "} ";
    std::cout << '\n';
}
