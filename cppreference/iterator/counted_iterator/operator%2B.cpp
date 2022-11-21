// cppreference link https://en.cppreference.com/w/cpp/iterator/counted_iterator/operator%2B
#include <iostream>
#include <iterator>
#include <list>
#include <vector>

int main()
{
    std::vector v { 0, 1, 2, 3, 4, 5 };
    std::counted_iterator<std::vector<int>::iterator> p { v.begin() + 1, 4 };
    std::cout << "*p:" << *p << ", count:" << p.count() << '\n';
    std::counted_iterator<std::vector<int>::iterator> q { 2 + p };
    std::cout << "*q:" << *q << ", count:" << q.count() << '\n';

    std::list l { 6, 7, 8, 9 };
    std::counted_iterator<std::list<int>::iterator> r { l.begin(), 3 };
    std::cout << "*r:" << *r << ", count:" << r.count() << '\n';
    //  auto s { 2 + r }; // error: the underlying iterator does
    // not model std::random_access_iterator
}
