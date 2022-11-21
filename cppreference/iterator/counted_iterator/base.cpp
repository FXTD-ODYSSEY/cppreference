// cppreference link https://en.cppreference.com/w/cpp/iterator/counted_iterator/base
#include <algorithm>
#include <iostream>
#include <iterator>
#include <type_traits>
#include <vector>

int main()
{
    std::vector<int> v = { 0, 1, 2, 3, 4 };

    std::reverse_iterator<std::vector<int>::iterator> reverse { v.rbegin() };

    std::counted_iterator counted { reverse, 3 };

    static_assert(std::is_same<decltype(counted.base()),
        std::reverse_iterator<std::vector<int>::iterator>> {});

    std::cout << "Print with reverse_iterator: ";
    for (auto r = counted.base(); r != v.rend(); ++r)
        std::cout << *r << ' ';
    std::cout << '\n';

    std::cout << "Print with counted_iterator: ";
    for (; counted != std::default_sentinel; ++counted)
        std::cout << counted[0] << ' ';
    std::cout << '\n';
}
