// cppreference link https://en.cppreference.com/w/cpp/iterator/move_iterator/base
#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>

int main()
{
    std::vector<int> v { 0, 1, 2, 3, 4 };
    std::move_iterator<std::vector<int>::reverse_iterator>
        m1 { v.rbegin() },
        m2 { v.rend() };

    std::copy(m1.base(), m2.base(), std::ostream_iterator<int>(std::cout, " "));
    std::cout << '\n';
}
