// cppreference link https://en.cppreference.com/w/cpp/algorithm/for_each_n
#include <algorithm>
#include <iostream>
#include <vector>

int main()
{
    std::vector<int> ns { 1, 2, 3, 4, 5 };
    for (auto n : ns)
        std::cout << n << ", ";
    std::cout << '\n';
    std::for_each_n(ns.begin(), 3, [](auto& n) { n *= 2; });
    for (auto n : ns)
        std::cout << n << ", ";
    std::cout << '\n';
}
