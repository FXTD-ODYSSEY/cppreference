// cppreference link https://en.cppreference.com/w/cpp/algorithm/ranges/return_types/in_fun_result
#include <algorithm>
#include <iostream>
#include <iterator>
#include <ranges>

int main()
{
    int v[] { 1, 2, 3 };

    const auto [last, negate] = std::ranges::for_each_n(v, std::size(v),
        [](int& x) { return x = -x; });

    const auto result = std::ranges::for_each(std::cbegin(v), last,
        [](int x) { std::cout << x << ' '; });
    std::cout << "│ ";

    std::ranges::for_each(v, negate);
    std::ranges::for_each(v, result.fun);
    std::cout << '\n';
}
