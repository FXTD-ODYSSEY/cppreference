// cppreference link https://en.cppreference.com/w/cpp/iterator/ostream_iterator/ostream_iterator
#include <algorithm>
#include <iostream>
#include <iterator>
#include <numeric>
int main()
{
    std::ostream_iterator<char> oo { std::cout };
    std::ostream_iterator<int> i1 { std::cout, ", " };
    std::fill_n(i1, 5, -1);
    *oo++ = '\n';

    std::ostream_iterator<double> i2 { std::cout, "; " };
    *i2++ = 3.14;
    *i2++ = 2.71;
    *oo++ = '\n';

    std::common_iterator<std::counted_iterator<std::ostream_iterator<float>>,
        std::default_sentinel_t>
        first { std::counted_iterator { std::ostream_iterator<float> { std::cout, " ~ " }, 5 } },
        last { std::default_sentinel };
    std::iota(first, last, 2.2);
    *oo++ = '\n';
}
