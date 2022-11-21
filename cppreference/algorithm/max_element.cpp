// cppreference link https://en.cppreference.com/w/cpp/algorithm/max_element
#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>

int main()
{
    std::vector<int> v { 3, 1, -14, 1, 5, 9 };
    std::vector<int>::iterator result;

    result = std::max_element(v.begin(), v.end());
    std::cout << "max element found at index "
              << std::distance(v.begin(), result)
              << " has value " << *result << '\n';

    result = std::max_element(v.begin(), v.end(), [](int a, int b) {
        return std::abs(a) < std::abs(b);
    });
    std::cout << "absolute max element found at index "
              << std::distance(v.begin(), result)
              << " has value " << *result << '\n';
}
