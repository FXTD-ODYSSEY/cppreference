// cppreference link https://en.cppreference.com/w/cpp/algorithm/ranges/partial_sort
#include <algorithm>
#include <functional>
#include <iostream>
#include <string>
#include <vector>

void print(const auto& v)
{
    for (const char e : v) {
        std::cout << e << ' ';
    }
    std::cout << '\n';
}

void underscore(int n)
{
    while (n-- > 0) {
        std::cout << "^ ";
    }
    std::cout << '\n';
}

int main()
{
    static_assert('A' < 'a');
    std::vector<char> v { 'x', 'P', 'y', 'C', 'z', 'w', 'P', 'o' };
    print(v);
    std::ranges::partial_sort(v, v.begin() + 3);
    print(v);
    underscore(3);

    static_assert('1' < 'a');
    std::string s { "3a1b41c5" };
    print(s);
    std::ranges::partial_sort(s.begin(), s.begin() + 3, s.end(), std::greater {});
    print(s);
    underscore(3);
}
