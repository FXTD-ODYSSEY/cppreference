// cppreference link https://en.cppreference.com/w/cpp/iterator/insert_iterator
#include <algorithm>
#include <iostream>
#include <iterator>
#include <list>
#include <vector>

int main()
{
    std::vector<int> v { 1, 2, 3, 4, 5 };
    std::list<int> l { -1, -2, -3 };
    std::copy(v.begin(), v.end(), // may be simplified with std::inserter
        std::insert_iterator<std::list<int>>(l, std::next(l.begin())));
    for (int n : l)
        std::cout << n << ' ';
    std::cout << '\n';
}
