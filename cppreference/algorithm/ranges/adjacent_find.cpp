// cppreference link https://en.cppreference.com/w/cpp/algorithm/ranges/adjacent_find
#include <algorithm>
#include <functional>
#include <iostream>

int main()
{
    const auto v = { 0, 1, 2, 3, 40, 40, 41, 41, 5 }; /*
                                  ^^          ^^       */
    namespace ranges = std::ranges;

    if (auto it = ranges::adjacent_find(v.begin(), v.end()); it == v.end())
        std::cout << "No matching adjacent elements\n";
    else
        std::cout << "The first adjacent pair of equal elements is at ["
                  << ranges::distance(v.begin(), it) << "] == " << *it << '\n';

    if (auto it = ranges::adjacent_find(v, ranges::greater()); it == v.end())
        std::cout << "The entire vector is sorted in ascending order\n";
    else
        std::cout << "The last element in the non-decreasing subsequence is at ["
                  << ranges::distance(v.begin(), it) << "] == " << *it << '\n';
}
