// cppreference link https://en.cppreference.com/w/cpp/ranges/elements_view/iterator/operator_at
#include <iostream>
#include <ranges>
#include <string_view>
#include <tuple>

int main()
{
    using T = std::tuple<int, char, std::string_view>;

    const auto il = {
        T { 1, 'A', "α" },
        T { 2, 'B', "β" },
        T { 3, 'C', "γ" },
    };

    std::cout
        << std::views::elements<0>(il)[1] << ' ' // 2
        << std::views::elements<1>(il)[1] << ' ' // B
        << std::views::elements<2>(il)[1] << '\n'; // β
}
