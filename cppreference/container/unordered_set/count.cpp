// cppreference link https://en.cppreference.com/w/cpp/container/unordered_set/count
#include <algorithm>
#include <iostream>
#include <unordered_set>

int main()
{
    std::unordered_set set { 2, 7, 1, 8, 2, 8, 1, 8, 2, 8 };

    std::cout << "The set is: ";
    for (int e : set) {
        std::cout << e << ' ';
    }

    const auto [min, max] = std::ranges::minmax(set);

    std::cout << "\nNumbers from " << min << " to " << max << " that are in the set: ";
    for (int i { min }; i <= max; ++i) {
        if (set.count(i) == 1) {
            std::cout << i << ' ';
        }
    }
}
