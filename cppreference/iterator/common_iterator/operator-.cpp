// cppreference link https://en.cppreference.com/w/cpp/iterator/common_iterator/operator-
#include <algorithm>
#include <iostream>
#include <iterator>

int main()
{
    int a[] { 0, 1, 2, 3, 4, 5 };

    using CI = std::common_iterator<
        std::counted_iterator<int*>,
        std::default_sentinel_t>;

    CI i1 { std::counted_iterator { a + 1, 2 } };
    CI i2 { std::counted_iterator { a + 1, 3 } };
    CI s1 { std::default_sentinel };
    CI s2 { std::default_sentinel };

    std::cout << (s2 - s1) << ' '
              << (i2 - i1) << ' '
              << (i1 - s1) << '\n';
}
