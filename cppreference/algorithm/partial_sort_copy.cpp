// cppreference link https://en.cppreference.com/w/cpp/algorithm/partial_sort_copy
#include <algorithm>
#include <functional>
#include <iostream>
#include <vector>

int main()
{
    const auto v0 = { 4, 2, 5, 1, 3 };
    std::vector<int> v1 { 10, 11, 12 };
    std::vector<int> v2 { 10, 11, 12, 13, 14, 15, 16 };
    std::vector<int>::iterator it;

    it = std::partial_sort_copy(v0.begin(), v0.end(), v1.begin(), v1.end());

    std::cout << "Writing to the smaller vector in ascending order gives: ";
    for (int a : v1) {
        std::cout << a << " ";
    }
    std::cout << '\n';
    if (it == v1.end())
        std::cout << "The return value is the end iterator\n";

    it = std::partial_sort_copy(v0.begin(), v0.end(), v2.begin(), v2.end(),
        std::greater<int>());

    std::cout << "Writing to the larger vector in descending order gives: ";
    for (int a : v2) {
        std::cout << a << " ";
    }
    std::cout << '\n'
              << "The return value is the iterator to " << *it << '\n';
}
