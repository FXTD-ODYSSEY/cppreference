// cppreference link https://en.cppreference.com/w/cpp/algorithm/replace
#include <algorithm>
#include <array>
#include <functional>
#include <iostream>

int main()
{
    std::array<int, 10> s { 5, 7, 4, 2, 8, 6, 1, 9, 0, 3 };

    std::replace(s.begin(), s.end(), 8, 88);

    for (int a : s) {
        std::cout << a << " ";
    }
    std::cout << '\n';

    std::replace_if(s.begin(), s.end(),
        std::bind(std::less<int>(), std::placeholders::_1, 5), 55);
    for (int a : s) {
        std::cout << a << " ";
    }
    std::cout << '\n';
}
