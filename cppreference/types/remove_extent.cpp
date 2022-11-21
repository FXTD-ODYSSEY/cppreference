// cppreference link https://en.cppreference.com/w/cpp/types/remove_extent
#include <algorithm>
#include <iostream>
#include <iterator>
#include <type_traits>

template <class A>
std::enable_if_t<std::rank_v<A> == 1>
print_1d(const A& a)
{
    std::copy(a, a + std::extent_v<A>,
        std::ostream_iterator<std::remove_extent_t<A>>(std::cout, " "));
    std::cout << '\n';
}

int main()
{
    int a[][3] = { { 1, 2, 3 }, { 4, 5, 6 } };
    //  print_1d(a); // compile-time error
    print_1d(a[1]);
}
