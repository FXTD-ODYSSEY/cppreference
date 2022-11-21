// cppreference link https://en.cppreference.com/w/cpp/ranges/join_with_view
#include <iostream>
#include <ranges>
#include <string_view>
#include <vector>

int main()
{
    using namespace std::literals;

    std::vector v { "This"sv, "is"sv, "a"sv, "test."sv };
    auto joined = v | std::views::join_with(' ');

    for (auto c : joined)
        std::cout << c;
    std::cout << '\n';
}
