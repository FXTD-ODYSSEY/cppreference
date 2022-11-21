// cppreference link https://en.cppreference.com/w/cpp/iterator/common_iterator/operator_cmp
#include <algorithm>
#include <initializer_list>
#include <iostream>
#include <iterator>

int main()
{
    int a[] { 0, 1, 2, 3 };

    using CI = std::common_iterator<
        std::counted_iterator<int*>,
        std::default_sentinel_t>;

    CI i1 { std::counted_iterator { a + 0, 2 } };
    CI i2 { std::counted_iterator { a + 1, 2 } };
    CI i3 { std::counted_iterator { a + 0, 3 } };
    CI i4 { std::counted_iterator { a + 0, 0 } };
    CI s1 { std::default_sentinel };
    CI s2 { std::default_sentinel };

    std::cout << std::boolalpha
              << (i1 == i2) << ' ' // true
              << (i1 == i3) << ' ' // false
              << (i2 == i3) << ' ' // false
              << (s1 == s2) << ' ' // true
              << (i1 == s1) << ' ' // false
              << (i4 == s1) << '\n'; // true
}
