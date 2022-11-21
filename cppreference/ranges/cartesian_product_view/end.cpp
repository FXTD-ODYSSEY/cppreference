// cppreference link https://en.cppreference.com/w/cpp/ranges/cartesian_product_view/end
#include <array>
#include <print>
#include <ranges>
#include <string_view>
#include <tuple>
using namespace std::literals;

int main()
{
    constexpr auto a = std::array { "bool"sv, "goto"sv, "extern"sv, "long"sv }; /*
                                   ^         ^           ^         ^            */
    constexpr auto v = std::ranges::cartesian_product_view(a[0], a[1], a[2], a[3]);

    constexpr std::tuple<char const&,
        char const&,
        char const&,
        char const&>
        last { *(v.end() - 1) };

    std::println("{}{}{}{}",
        std::get<0>(last),
        std::get<1>(last),
        std::get<2>(last),
        std::get<3>(last));
}
