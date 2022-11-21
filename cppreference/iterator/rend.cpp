// cppreference link https://en.cppreference.com/w/cpp/iterator/rend
#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>

int main()
{
    int a[] = { 4, 6, -3, 9, 10 };
    std::cout << "C-style array `a` backwards: ";
    std::copy(std::rbegin(a), std::rend(a), std::ostream_iterator<int>(std::cout, " "));

    auto il = { 3, 1, 4 };
    std::cout << "\nstd::initializer_list `il` backwards: ";
    std::copy(std::rbegin(il), std::rend(il), std::ostream_iterator<int>(std::cout, " "));

    std::cout << "\nstd::vector `v` backwards: ";
    std::vector<int> v = { 4, 6, -3, 9, 10 };
    std::copy(std::rbegin(v), std::rend(v), std::ostream_iterator<int>(std::cout, " "));
}
