// cppreference link https://en.cppreference.com/w/cpp/algorithm/partial_sort
#include <algorithm>
#include <array>
#include <functional>
#include <iostream>

auto print = [](auto const& s, int middle) {
    for (int a : s) {
        std::cout << a << ' ';
    }
    std::cout << '\n';
    if (middle > 0) {
        while (middle-- > 0) {
            std::cout << "──";
        }
        std::cout << '^';
    } else if (middle < 0) {
        for (auto i = s.size() + middle; --i; std::cout << "  ")
            ;
        for (std::cout << '^'; middle++ < 0; std::cout << "──")
            ;
    }
    std::cout << '\n';
};

int main()
{
    std::array<int, 10> s { 5, 7, 4, 2, 8, 6, 1, 9, 0, 3 };

    print(s, 0);
    std::partial_sort(s.begin(), s.begin() + 3, s.end());
    print(s, 3);
    std::partial_sort(s.rbegin(), s.rbegin() + 4, s.rend());
    print(s, -4);
    std::partial_sort(s.rbegin(), s.rbegin() + 5, s.rend(), std::greater {});
    print(s, -5);
}
