// cppreference link https://en.cppreference.com/w/cpp/iterator/common_iterator/operator_arith
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

    CI first { std::counted_iterator { std::begin(il), std::ssize(il) - 2 } };
    CI last { std::default_sentinel };

    while (first != last) {
        std::cout << *first;
        std::cout << (++first != last ? ", " : "\n");
    }
}
