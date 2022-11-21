// cppreference link https://en.cppreference.com/w/cpp/ranges/common_view/begin
#include <iostream>
#include <numeric>
#include <ranges>
#include <string_view>

int main()
{
    constexpr auto common = std::views::iota(1)
        | std::views::take(3)
        | std::views::common;

    for (int i {}; int e : common) {
        std::cout << (i++ ? " + " : "") << e;
    }

    std::cout << " = " << std::accumulate(common.begin(), common.end(), 0) << '\n';
}
