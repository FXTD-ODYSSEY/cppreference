// cppreference link https://en.cppreference.com/w/cpp/iterator/default_sentinel_t
#include <algorithm>
#include <iostream>
#include <iterator>
#include <list>

int main()
{
    std::list<int> l { 3, 1, 4, 1, 5, 9, 2, 6 };

    std::ranges::copy(std::counted_iterator(std::begin(l), 4),
        std::default_sentinel, std::ostream_iterator<int> { std::cout, " " });
}
