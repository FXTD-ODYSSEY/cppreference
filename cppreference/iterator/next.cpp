// cppreference link https://en.cppreference.com/w/cpp/iterator/next
#include <iostream>
#include <iterator>
#include <vector>

int main()
{
    std::vector<int> v { 4, 5, 6 };

    auto it = v.begin();
    auto nx = std::next(it, 2);
    std::cout << *it << ' ' << *nx << '\n';

    it = v.end();
    nx = std::next(it, -2);
    std::cout << ' ' << *nx << '\n';
}
