// cppreference link https://en.cppreference.com/w/cpp/ranges/adjacent_view/iterator/operator_at
#include <ranges>
#include <tuple>

int main()
{
    constexpr static auto v = { 0, 1, 2, 3, 4, 5 };
    //                               └──┬──┘
    //                                  └─────────────────┐
    constexpr auto view = v | std::views::adjacent<3>; // │
    //                 ┌───────────────────┬──────────────┘
    //                 │                ┌──┴──┐
    static_assert(view[2] == std::tuple { 2, 3, 4 });
}
