// cppreference link https://en.cppreference.com/w/cpp/algorithm/is_permutation
#include <algorithm>
#include <iostream>

template <typename Os, typename V>
Os& operator<<(Os& os, V const& v)
{
    os << "{ ";
    for (auto const& e : v)
        os << e << ' ';
    return os << "}";
}

int main()
{
    static constexpr auto v1 = { 1, 2, 3, 4, 5 };
    static constexpr auto v2 = { 3, 5, 4, 1, 2 };
    static constexpr auto v3 = { 3, 5, 4, 1, 1 };

    std::cout << v2 << " is a permutation of " << v1 << ": " << std::boolalpha
              << std::is_permutation(v1.begin(), v1.end(), v2.begin()) << '\n'
              << v3 << " is a permutation of " << v1 << ": " << std::boolalpha
              << std::is_permutation(v1.begin(), v1.end(), v3.begin()) << '\n';
}
