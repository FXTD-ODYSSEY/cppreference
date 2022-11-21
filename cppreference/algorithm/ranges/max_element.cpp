// cppreference link https://en.cppreference.com/w/cpp/algorithm/ranges/max_element
#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>

int main()
{
    std::vector<int> v { 3, 1, -14, 1, 5, 9 };

    namespace ranges = std::ranges;
    auto result = ranges::max_element(v.begin(), v.end());
    std::cout << "max element at: " << ranges::distance(v.begin(), result) << '\n';

    auto abs_compare = [](int a, int b) { return (std::abs(a) < std::abs(b)); };
    result = ranges::max_element(v, abs_compare);
    std::cout << "max element (absolute) at: " << ranges::distance(v.begin(), result) << '\n';
}
