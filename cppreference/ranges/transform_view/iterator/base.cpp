// cppreference link https://en.cppreference.com/w/cpp/ranges/transform_view/iterator/base
#include <algorithm>
#include <iostream>
#include <iterator>
#include <ranges>

int main()
{
    const auto v = { 0, 1, 2, 3, 4 };
    auto x2 = [](int x) { return x << 1; };
    std::ranges::transform_view tv { v, x2 };
    std::ostream_iterator<int> ostr { std::cout, " " };

    std::ranges::copy(v, ostr), std::cout << '\n';
    std::ranges::copy(tv.base(), ostr), std::cout << '\n';
    std::ranges::copy(tv, ostr), std::cout << '\n';
}
