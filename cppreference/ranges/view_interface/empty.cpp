// cppreference link https://en.cppreference.com/w/cpp/ranges/view_interface/empty
#include <array>
#include <ranges>

int main()
{
    constexpr std::array a { 0, 1, 2, 3, 4 };
    static_assert(!std::ranges::single_view(a).empty());
    static_assert((a | std::views::take(0)).empty());
    static_assert(!(a | std::views::take(2)).empty());
    static_assert((a | std::views::drop(9)).empty());
    static_assert(!(a | std::views::drop(2)).empty());
    static_assert(std::views::iota(0, 0).empty());
    static_assert(!std::views::iota(0).empty());
}
