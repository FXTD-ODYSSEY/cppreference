// cppreference link https://en.cppreference.com/w/cpp/ranges/common_view/size
#include <ranges>
#include <string_view>

int main()
{
    constexpr static auto v1 = { 1, 2, 3, 4, 5 };
    constexpr auto common1 { v1 | std::views::common };
    static_assert(common1.size() == 5);

    constexpr auto take3 { v1 | std::views::reverse | std::views::take(3) };
    constexpr auto common2 { take3 | std::views::common };
    static_assert(common2.size() == 3);

    using namespace std::literals;
    constexpr static auto v2 = { "∧"sv, "∨"sv, "∃"sv, "∀"sv };
    static_assert(std::ranges::views::common(v2).size() == 4);
}
