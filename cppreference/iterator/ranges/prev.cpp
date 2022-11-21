// cppreference link https://en.cppreference.com/w/cpp/iterator/ranges/prev
#include <iostream>
#include <iterator>
#include <vector>

int main()
{
    std::vector<int> v { 3, 1, 4 };
    auto pv = std::ranges::prev(v.end(), 2);
    std::cout << *pv << '\n';

    pv = std::ranges::prev(pv, 42, v.begin());
    std::cout << *pv << '\n';
}
