// cppreference link https://en.cppreference.com/w/cpp/iterator/counted_iterator/counted_iterator
#include <algorithm>
#include <initializer_list>
#include <iostream>
#include <iterator>

int main()
{
    static constexpr auto pi = { 3, 1, 4, 1, 5, 9, 2 };

    // (1) default constructor:
    constexpr std::counted_iterator<std::initializer_list<int>::iterator> i1 {};
    static_assert(i1 == std::default_sentinel);
    static_assert(i1.count() == 0);

    // (2) initializes the iterator and length respectively:
    constexpr std::counted_iterator<std::initializer_list<int>::iterator> i2 {
        pi.begin(), pi.size() - 2
    };
    static_assert(i2.count() == 5);
    static_assert(*i2 == 3 && i2[1] == 1);

    // (3) converting-constructor:
    std::counted_iterator<std::initializer_list<const int>::iterator> i3 { i2 };

    std::ranges::copy(i3, std::default_sentinel,
        std::ostream_iterator<const int> { std::cout, " " });
}
