// cppreference link https://en.cppreference.com/w/cpp/ranges/repeat_view
#include <iostream>
#include <ranges>
#include <string_view>
using namespace std::literals;

int main()
{
    // bounded overload
    for (auto s : std::views::repeat("C++"sv, 4)) {
        std::cout << s << ' ';
    }
    std::cout << '\n';

    // unbounded overload
    for (auto s : std::views::repeat("C++"sv) | std::views::take(4)) {
        std::cout << s << ' ';
    }
    std::cout << '\n';
}
