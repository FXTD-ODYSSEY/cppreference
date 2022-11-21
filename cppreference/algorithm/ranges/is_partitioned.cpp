// cppreference link https://en.cppreference.com/w/cpp/algorithm/ranges/is_partitioned
#include <algorithm>
#include <array>
#include <iostream>
#include <utility>

int main()
{
    std::array<int, 9> v;

    auto is_even = [](int i) { return i % 2 == 0; };
    auto print = [&](bool o) {
        for (int x : v)
            std::cout << x << ' ';
        std::cout << (o ? "=> " : "=> not ") << "partitioned\n";
    };

    std::iota(v.begin(), v.end(), 1);
    print(std::ranges::is_partitioned(v, is_even));

    std::ranges::partition(v, is_even);
    print(std::ranges::is_partitioned(std::as_const(v), is_even));

    std::ranges::reverse(v);
    print(std::ranges::is_partitioned(v.cbegin(), v.cend(), is_even));
    print(std::ranges::is_partitioned(v.crbegin(), v.crend(), is_even));
}
