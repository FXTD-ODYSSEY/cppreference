// cppreference link https://en.cppreference.com/w/cpp/iterator/reverse_iterator/iter_swap
#include <iostream>
#include <iterator>
#include <list>
#include <vector>

int main()
{
    std::vector v { 1, 2, 3 };
    std::list l { 4, 5, 6 };

    std::reverse_iterator<std::vector<int>::iterator> r1 { v.rbegin() };
    std::reverse_iterator<std::list<int>::iterator> r2 { l.rbegin() };

    std::cout << *r1 << ' ' << *r2 << '\n';

    iter_swap(r1, r2); // ADL

    std::cout << *r1 << ' ' << *r2 << '\n';
}
