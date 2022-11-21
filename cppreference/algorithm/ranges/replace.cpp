// cppreference link https://en.cppreference.com/w/cpp/algorithm/ranges/replace
#include <algorithm>
#include <array>
#include <iostream>

int main()
{
    auto print = [](const auto& v) {
        for (const auto& e : v) {
            std::cout << e << ' ';
        }
        std::cout << '\n';
    };

    std::array p { 1, 6, 1, 6, 1, 6 };
    print(p);
    std::ranges::replace(p, 6, 9);
    print(p);

    std::array q { 1, 2, 3, 6, 7, 8, 4, 5 };
    print(q);
    std::ranges::replace_if(
        q, [](int x) { return 5 < x; }, 5);
    print(q);
}
