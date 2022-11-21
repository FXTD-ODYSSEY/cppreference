// cppreference link https://en.cppreference.com/w/cpp/algorithm/is_heap_until
#include <algorithm>
#include <iostream>
#include <vector>

int main()
{
    std::vector<int> v { 3, 1, 4, 1, 5, 9 };

    std::make_heap(v.begin(), v.end());

    // probably mess up the heap
    v.push_back(2);
    v.push_back(6);

    auto heap_end = std::is_heap_until(v.begin(), v.end());

    std::cout << "all of v: ";
    for (auto i : v)
        std::cout << i << ' ';
    std::cout << '\n';

    std::cout << "only heap: ";
    for (auto i = v.begin(); i != heap_end; ++i)
        std::cout << *i << ' ';
    std::cout << '\n';
}
