// cppreference link https://en.cppreference.com/w/cpp/algorithm/partial_sum
#include <functional>
#include <iostream>
#include <iterator>
#include <numeric>
#include <vector>

int main()
{
    std::vector<int> v = { 2, 2, 2, 2, 2, 2, 2, 2, 2, 2 }; // or std::vector<int>v(10, 2);

    std::cout << "The first 10 even numbers are: ";
    std::partial_sum(v.begin(), v.end(),
        std::ostream_iterator<int>(std::cout, " "));
    std::cout << '\n';

    std::partial_sum(v.begin(), v.end(), v.begin(), std::multiplies<int>());

    std::cout << "The first 10 powers of 2 are: ";
    for (auto n : v)
        std::cout << n << " ";
    std::cout << '\n';
}
