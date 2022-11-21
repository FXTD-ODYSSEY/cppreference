// cppreference link https://en.cppreference.com/w/cpp/algorithm/ranges/sort_heap
#include <algorithm>
#include <array>
#include <iostream>

void print(auto const& rem, auto const& v)
{
    std::cout << rem;
    for (const auto i : v)
        std::cout << i << ' ';
    std::cout << '\n';
}

int main()
{
    std::array v { 3, 1, 4, 1, 5, 9 };
    print("original array:  ", v);

    std::ranges::make_heap(v);
    print("after make_heap: ", v);

    std::ranges::sort_heap(v);
    print("after sort_heap: ", v);
}
