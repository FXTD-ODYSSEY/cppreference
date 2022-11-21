// cppreference link https://en.cppreference.com/w/cpp/ranges/drop_view/size
#include <array>
#include <ranges>

int main()
{
    constexpr std::array a { 42, 43, 44 };
    static_assert(std::ranges::drop_view { std::views::all(a), 0 }.size() == 3);
    static_assert(std::ranges::drop_view { std::views::all(a), 1 }.size() == 2);
    static_assert(std::ranges::drop_view { std::views::all(a), 2 }.size() == 1);
    static_assert(std::ranges::drop_view { std::views::all(a), 3 }.size() == 0);
    static_assert(std::ranges::drop_view { std::views::all(a), 4 }.size() == 0);
}
