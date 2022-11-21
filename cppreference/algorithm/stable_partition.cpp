// cppreference link https://en.cppreference.com/w/cpp/algorithm/stable_partition
#include <algorithm>
#include <iostream>
#include <vector>

int main()
{
    std::vector<int> v { 0, 0, 3, -1, 2, 4, 5, 0, 7 };
    std::stable_partition(v.begin(), v.end(), [](int n) { return n > 0; });
    for (int n : v) {
        std::cout << n << ' ';
    }
    std::cout << '\n';
}
