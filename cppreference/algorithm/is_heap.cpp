// cppreference link https://en.cppreference.com/w/cpp/algorithm/is_heap
#include <algorithm>
#include <bit>
#include <iostream>
#include <vector>

int main()
{
    std::vector<int> v { 3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5, 8, 9, 7, 9 };

    std::cout << "initially, v:\n";
    for (auto i : v)
        std::cout << i << ' ';
    std::cout << '\n';

    if (!std::is_heap(v.begin(), v.end())) {
        std::cout << "making heap...\n";
        std::make_heap(v.begin(), v.end());
    }

    std::cout << "after make_heap, v:\n";
    for (auto t { 1U }; auto i : v)
        std::cout << i << (std::has_single_bit(++t) ? " │ " : " ");
    std::cout << '\n';
}
