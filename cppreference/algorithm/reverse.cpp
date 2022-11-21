// cppreference link https://en.cppreference.com/w/cpp/algorithm/reverse
#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>

int main()
{
    std::vector<int> v { 1, 2, 3 };
    std::reverse(v.begin(), v.end());

    for (auto e : v)
        std::cout << e;
    std::cout << '\n';

    int a[] = { 4, 5, 6, 7 };
    std::reverse(std::begin(a), std::end(a));

    for (auto e : a)
        std::cout << e;
}
