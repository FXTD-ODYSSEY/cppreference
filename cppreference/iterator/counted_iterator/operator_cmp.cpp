// cppreference link https://en.cppreference.com/w/cpp/iterator/counted_iterator/operator_cmp
#include <initializer_list>
#include <iterator>

int main()
{
    static constexpr auto v = { 1, 2, 3, 4, 5, 6 };
    constexpr std::counted_iterator<std::initializer_list<int>::iterator>
        it1 { v.begin(), 5 },
        it2 { v.begin(), 5 },
        it3 { v.begin() + 1, 4 },
        it4 { v.begin(), 0 };
    static_assert(it1 == it2);
    static_assert(it2 != it3);
    static_assert(it2 < it3);
    static_assert(it1 <= it2);
    static_assert(it3 != std::default_sentinel);
    static_assert(it4 == std::default_sentinel);

    // it2 == std::counted_iterator{v.begin(), 4}; // UB: operands do not refer to
    // elements of the same sequence
}
