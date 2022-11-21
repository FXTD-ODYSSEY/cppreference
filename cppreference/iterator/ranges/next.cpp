// cppreference link https://en.cppreference.com/w/cpp/iterator/ranges/next
#include <iomanip>
#include <iostream>
#include <iterator>
#include <vector>

int main()
{
    std::cout << std::boolalpha;
    std::vector<int> v { 3, 1, 4 };
    {
        auto n = std::ranges::next(v.begin());
        std::cout << *n << '\n';
    }
    {
        auto n = std::ranges::next(v.begin(), 2);
        std::cout << *n << '\n';
    }
    {
        auto n = std::ranges::next(v.begin(), v.end());
        std::cout << (n == v.end()) << '\n';
    }
    {
        auto n = std::ranges::next(v.begin(), 42, v.end());
        std::cout << (n == v.end()) << '\n';
    }
}
