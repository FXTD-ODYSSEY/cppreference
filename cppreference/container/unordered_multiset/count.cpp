// cppreference link https://en.cppreference.com/w/cpp/container/unordered_multiset/count
#include <algorithm>
#include <iostream>
#include <unordered_set>

int main()
{
    std::unordered_multiset set { 2, 7, 1, 8, 2, 8, 1, 8, 2, 8 };

    std::cout << "The set is:\n";
    for (int e : set) {
        std::cout << e << ' ';
    }

    const auto [min, max] = std::ranges::minmax(set);

    std::cout << "\nNumbers [" << min << ".." << max << "] frequency:\n";

    for (int i { min }; i <= max; ++i) {
        std::cout << i << ':' << set.count(i) << "; ";
    }
}
