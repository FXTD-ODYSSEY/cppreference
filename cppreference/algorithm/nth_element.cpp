// cppreference link https://en.cppreference.com/w/cpp/algorithm/nth_element
#include <algorithm>
#include <cassert>
#include <functional>
#include <iostream>
#include <numeric>
#include <vector>

void printVec(const std::vector<int>& vec)
{
    std::cout << "v= {";
    for (int i : vec)
        std::cout << i << ", ";
    std::cout << "}\n";
}

int main()
{
    std::vector<int> v { 5, 10, 6, 4, 3, 2, 6, 7, 9, 3 };
    printVec(v);

    auto m = v.begin() + v.size() / 2;
    std::nth_element(v.begin(), m, v.end());
    std::cout << "\nThe median is " << v[v.size() / 2] << '\n';
    // The consequence of the inequality of elements before/after the Nth one:
    assert(std::accumulate(v.begin(), m, 0) < std::accumulate(m, v.end(), 0));
    printVec(v);

    // Note: comp function changed
    std::nth_element(v.begin(), v.begin() + 1, v.end(), std::greater {});
    std::cout << "\nThe second largest element is " << v[1] << '\n';
    std::cout << "The largest element is " << v[0] << '\n';
    printVec(v);
}
