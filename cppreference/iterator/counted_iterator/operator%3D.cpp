// cppreference link https://en.cppreference.com/w/cpp/iterator/counted_iterator/operator%3D
#include <algorithm>
#include <cassert>
#include <initializer_list>
#include <iterator>

int main()
{
    auto a = { 3, 1, 4, 1, 5, 9, 2 };
    std::counted_iterator<std::initializer_list<int>::iterator> p(begin(a), size(a) - 2);
    std::counted_iterator<std::initializer_list<int>::iterator> q;
    assert(q.count() == 0);
    assert(q.count() != p.count());
    q = p;
    assert(q.count() == p.count());
    assert(std::ranges::equal(p, std::default_sentinel, q, std::default_sentinel));
}
