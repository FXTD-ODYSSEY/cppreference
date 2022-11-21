// cppreference link https://en.cppreference.com/w/cpp/iterator/counted_iterator/iter_swap
#include <iostream>
#include <iterator>
#include <list>
#include <vector>

int main()
{
    std::vector p { 1, 2, 3, 4 },
        q { 5, 6, 7, 8 };

    std::counted_iterator<std::vector<int>::iterator> ip { p.begin(), 2 };
    std::counted_iterator<std::vector<int>::iterator> iq { q.begin(), 3 };

    std::cout << *ip << ' ' << *iq << '\n';
    iter_swap(ip, iq); // ADL
    std::cout << *ip << ' ' << *iq << '\n';

    std::list x { 0, 1, 3 };
    std::counted_iterator<std::list<int>::iterator> ix { x.begin(), 2 };
    //  iter_swap(ip, ix); // error: not indirectly swappable
}
