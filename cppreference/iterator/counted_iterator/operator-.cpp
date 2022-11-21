// cppreference link https://en.cppreference.com/w/cpp/iterator/counted_iterator/operator-
#include <initializer_list>
#include <iterator>

int main()
{
    static constexpr auto v = { 1, 2, 3, 4, 5, 6 };
    constexpr std::counted_iterator<std::initializer_list<int>::iterator>
        it1 { v.begin(), 5 },
        it2 { it1 + 3 },
        it3 { v.begin(), 2 };

    static_assert(it1 - it2 == -3);
    static_assert(it2 - it1 == +3);
    // static_assert(it1 - it3 == -3); // UB: operands of operator- do not refer to
    // elements of the same sequence
}
