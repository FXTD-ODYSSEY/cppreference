// cppreference link https://en.cppreference.com/w/cpp/iterator/common_iterator/common_iterator
#include <algorithm>
#include <iostream>
#include <iterator>
#include <numeric>
#include <vector>

int main()
{
    std::vector v { 3, 1, 4, 1, 5, 9, 2 };

    using CI = std::common_iterator<
        std::counted_iterator<std::vector<int>::iterator>,
        std::default_sentinel_t>;
    CI unused; // (1)
    CI start { std::counted_iterator { std::next(begin(v)), ssize(v) - 2 } }; // (2)
    CI finish { std::default_sentinel }; // (3)
    CI first { start }; // (4)
    CI last { finish }; // (4)

    std::copy(first, last, std::ostream_iterator<int> { std::cout, " " });
    std::cout << '\n';

    std::common_iterator<
        std::counted_iterator<
            std::ostream_iterator<double>>,
        std::default_sentinel_t>
        beg { std::counted_iterator { std::ostream_iterator<double> { std::cout, ";  " }, 5 } },
        end { std::default_sentinel };
    std::iota(beg, end, 3.1);
    std::cout << '\n';
}
