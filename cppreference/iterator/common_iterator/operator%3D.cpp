// cppreference link https://en.cppreference.com/w/cpp/iterator/common_iterator/operator%3D
#include <algorithm>
#include <initializer_list>
#include <iostream>
#include <iterator>

int main()
{
    const auto il = { 1, 2, 3, 4, 5, 6 };
    using CI = std::common_iterator<
        std::counted_iterator<std::initializer_list<int>::iterator>,
        std::default_sentinel_t>;
    CI first { std::counted_iterator { std::next(begin(il), 1), ssize(il) - 1 } };
    const CI first2 { std::counted_iterator { std::next(begin(il), 2), ssize(il) - 2 } };
    const CI last { std::default_sentinel };
    std::copy(first, last, std::ostream_iterator<int> { std::cout, " " });
    std::cout << '\n';
    first = first2;
    std::copy(first, last, std::ostream_iterator<int> { std::cout, " " });
    std::cout << '\n';
}
