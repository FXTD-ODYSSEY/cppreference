// cppreference link https://en.cppreference.com/w/cpp/ranges/view_interface/data
#include <array>
#include <iostream>
#include <ranges>
#include <string_view>

int main()
{
    constexpr std::string_view str { "Hello, C++20!" };
    std::cout << (str | std::views::drop(7)).data() << '\n';
    constexpr static std::array a { 1, 2, 3, 4, 5 };
    constexpr auto v { a | std::views::take(3) };
    static_assert(&a[0] == v.data());
}
