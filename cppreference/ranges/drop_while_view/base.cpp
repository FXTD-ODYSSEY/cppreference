// cppreference link https://en.cppreference.com/w/cpp/ranges/drop_while_view/base
#include <algorithm>
#include <array>
#include <iostream>
#include <ranges>

void print(auto first, auto last)
{
    for (; first != last; ++first)
        std::cout << *first << ' ';
    std::cout << '\n';
}

int main()
{
    std::array data { 1, 2, 3, 4, 5 };
    print(data.cbegin(), data.cend());

    auto func = [](int x) { return x < 3; };
    auto view = std::ranges::drop_while_view { data, func };
    print(view.begin(), view.end());

    auto base = view.base(); // `base` refers to the `data`
    std::ranges::reverse(base); //< changes `data` indirectly
    print(data.cbegin(), data.cend());
}
