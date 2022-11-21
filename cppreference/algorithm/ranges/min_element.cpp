// cppreference link https://en.cppreference.com/w/cpp/algorithm/ranges/min_element
#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>

int main()
{
    std::vector<int> v { 3, 1, -14, 1, 5, 9 };

    namespace ranges = std::ranges;
    auto result = ranges::min_element(v.begin(), v.end());
    std::cout << "min element at: " << ranges::distance(v.begin(), result) << '\n';

    auto abs_compare = [](int a, int b) { return (std::abs(a) < std::abs(b)); };
    result = ranges::min_element(v, abs_compare);
    std::cout << "min element (absolute) at: " << ranges::distance(v.begin(), result) << '\n';
}
