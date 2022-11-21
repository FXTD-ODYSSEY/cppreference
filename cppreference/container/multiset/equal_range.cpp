// cppreference link https://en.cppreference.com/w/cpp/container/multiset/equal_range
#include <iostream>
#include <set>

template <typename I>
void print_equal_range(I first, I lb, I ub, I last)
{
    for (I i { first }; i != lb; ++i)
        std::cout << *i << " ";
    std::cout << "[ ";
    for (I i { lb }; i != ub; ++i)
        std::cout << *i << " ";
    std::cout << ") ";
    for (I i { ub }; i != last; ++i)
        std::cout << *i << " ";
    std::cout << '\n';
}

int main()
{
    std::multiset<int> c { 4, 3, 2, 1, 3, 3 };
    std::cout << "c = ";
    print_equal_range(begin(c), begin(c), end(c), end(c));
    for (int key {}; key != 6; ++key) {
        std::cout << "key = " << key << "; equal range = ";
        const auto [lb, ub] = c.equal_range(key);
        print_equal_range(begin(c), lb, ub, end(c));
    }
}
