// cppreference link https://en.cppreference.com/w/cpp/algorithm/ranges/pop_heap
#include <algorithm>
#include <array>
#include <iostream>
#include <iterator>
#include <string_view>

template <class I = int*>
void print(std::string_view rem, I first = {}, I last = {},
    std::string_view term = "\n")
{
    for (std::cout << rem; first != last; ++first) {
        std::cout << *first << ' ';
    }
    std::cout << term;
}

int main()
{
    std::array v { 3, 1, 4, 1, 5, 9, 2, 6, 5, 3 };
    print("initially, v: ", v.cbegin(), v.cend());

    std::ranges::make_heap(v);
    print("make_heap, v: ", v.cbegin(), v.cend());

    print("convert heap into sorted array:");
    for (auto n { std::ssize(v) }; n >= 0; --n) {
        std::ranges::pop_heap(v.begin(), v.begin() + n);
        print("[ ", v.cbegin(), v.cbegin() + n, "]  ");
        print("[ ", v.cbegin() + n, v.cend(), "]\n");
    }
}
