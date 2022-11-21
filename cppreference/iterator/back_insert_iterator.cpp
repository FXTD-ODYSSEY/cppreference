// cppreference link https://en.cppreference.com/w/cpp/iterator/back_insert_iterator
#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>

int main()
{
    std::vector<int> v;
    std::generate_n(
        std::back_insert_iterator<std::vector<int>>(v), // C++17: std::back_insert_iterator(v)
        10, [n = 0]() mutable { return ++n; } // or use std::back_inserter helper
    );

    for (int n : v)
        std::cout << n << ' ';
    std::cout << '\n';
}
