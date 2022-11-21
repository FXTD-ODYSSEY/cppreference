// cppreference link https://en.cppreference.com/w/cpp/ranges/lazy_split_view/deduction_guides
#include <ranges>
#include <string_view>
#include <type_traits>
using std::operator""sv;

int main()
{
    std::ranges::lazy_split_view w1 { "a::b::c"sv, "::"sv };
    // type of w1 is lazy_split_view<string_view, string_view>:
    static_assert(std::is_same_v<
        decltype(w1),
        std::ranges::lazy_split_view<
            std::basic_string_view<char, std::char_traits<char>>,
            std::basic_string_view<char, std::char_traits<char>>>>);

    std::ranges::lazy_split_view w2 { "x,y,z"sv, ',' };
    // type of w2 is lazy_split_view<string_view, single_view<char>>:
    static_assert(std::is_same_v<
        decltype(w2),
        std::ranges::lazy_split_view<
            std::basic_string_view<char, std::char_traits<char>>,
            std::ranges::single_view<char>>>);
}
