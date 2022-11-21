// cppreference link https://en.cppreference.com/w/cpp/ranges/cartesian_product_view/begin
#include <array>
#include <print>
#include <ranges>
#include <string_view>
#include <tuple>
using namespace std::literals;

int main()
{
    constexpr auto a = std::array { "Curiously"sv, "Recurring"sv, "Template"sv, "Pattern"sv };

    constexpr auto v = std::ranges::cartesian_product_view(a[0], a[1], a[2], a[3]);

    constexpr std::tuple<char const&,
        char const&,
        char const&,
        char const&>
        first { *v.begin() };

    std::println("{}{}{}{}",
        std::get<0>(first),
        std::get<1>(first),
        std::get<2>(first),
        std::get<3>(first));
}
