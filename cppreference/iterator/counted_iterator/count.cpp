// cppreference link https://en.cppreference.com/w/cpp/iterator/counted_iterator/count
#include <iostream>
#include <iterator>

int main()
{
    constexpr static auto il = { 1, 2, 3, 4, 5 };
    constexpr std::counted_iterator i1 { il.begin() + 1, 3 };
    static_assert(i1.count() == 3);
    for (auto i2 { i1 }; std::default_sentinel != i2; ++i2)
        std::cout << *i2 << ' ';
    std::cout << '\n';
}
