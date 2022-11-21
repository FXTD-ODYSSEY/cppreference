// cppreference link https://en.cppreference.com/w/cpp/iterator/reverse_iterator/operator%2B
#include <iostream>
#include <iterator>
#include <list>
#include <vector>

int main()
{
    {
        std::vector v { 0, 1, 2, 3 };
        std::reverse_iterator<std::vector<int>::iterator>
            ri1 { std::reverse_iterator { v.rbegin() } };
        std::cout << *ri1 << ' '; // 3
        std::reverse_iterator<std::vector<int>::iterator> ri2 { 2 + ri1 };
        std::cout << *ri2 << ' '; // 1
    }
    {
        std::list l { 5, 6, 7, 8 };
        std::reverse_iterator<std::list<int>::iterator>
            ri1 { std::reverse_iterator { l.rbegin() } };
        std::cout << *ri1 << '\n'; // 8
        //  auto ri2 { 2 + ri1 }; // error: the underlying iterator does
        // not model the random access iterator
    }
}
