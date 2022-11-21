// cppreference link https://en.cppreference.com/w/cpp/iterator/iterator_tags
#include <iostream>
#include <iterator>
#include <list>
#include <vector>

// Using concepts (tag checking is part of the concepts themselves)

template <std::bidirectional_iterator BDIter>
void alg(BDIter, BDIter)
{
    std::cout << "1. alg() \t called for bidirectional iterator\n";
}

template <std::random_access_iterator RAIter>
void alg(RAIter, RAIter)
{
    std::cout << "2. alg() \t called for random-access iterator\n";
}

// Legacy, using tag dispatch

namespace legacy {

// quite often implementation details are hidden in a dedicated namespace
namespace implementation_details {
    template <class BDIter>
    void alg(BDIter, BDIter, std::bidirectional_iterator_tag)
    {
        std::cout << "3. legacy::alg() called for bidirectional iterator\n";
    }

    template <class RAIter>
    void alg(RAIter, RAIter, std::random_access_iterator_tag)
    {
        std::cout << "4. legacy::alg() called for random-access iterator\n";
    }
} // namespace implementation_details

template <class Iter>
void alg(Iter first, Iter last)
{
    implementation_details::alg(first, last,
        typename std::iterator_traits<Iter>::iterator_category());
}

} // namespace legacy

int main()
{
    std::list<int> l;
    alg(l.begin(), l.end()); // 1.
    legacy::alg(l.begin(), l.end()); // 3.

    std::vector<int> v;
    alg(v.begin(), v.end()); // 2.
    legacy::alg(v.begin(), v.end()); // 4.

    //    std::istreambuf_iterator<char> i1(std::cin), i2;
    //    alg(i1, i2);         // compile error: no matching function for call
    //    legacy::alg(i1, i2); // compile error: no matching function for call
}
