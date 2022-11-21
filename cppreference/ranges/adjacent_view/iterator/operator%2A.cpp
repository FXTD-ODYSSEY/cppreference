// cppreference link https://en.cppreference.com/w/cpp/ranges/adjacent_view/iterator/operator*
#include <ranges>
#include <tuple>

int main()
{
    constexpr static auto v = { 0, 1, 2, 3, 4, 5 };
    //                               └──┬──┘
    //                                  └─────────────────┐
    constexpr auto view { v | std::views::adjacent<3> }; // │
    constexpr auto iter { view.begin() + 2 }; // │
    //              ┌────────────────────┬────────────────┘
    //              │                 ┌──┴──┐
    static_assert(*iter == std::tuple { 2, 3, 4 });
}
