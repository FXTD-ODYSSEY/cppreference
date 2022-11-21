// cppreference link https://en.cppreference.com/w/cpp/ranges/lazy_split_view/end
#include <iostream>
#include <ranges>
#include <string_view>

int main()
{
    constexpr std::string_view keywords { "false float for friend" };
    std::ranges::lazy_split_view kw { keywords, ' ' };
    const auto count = std::ranges::distance(kw.begin(), kw.end());
    std::cout << "Words count: " << count << '\n';
}
