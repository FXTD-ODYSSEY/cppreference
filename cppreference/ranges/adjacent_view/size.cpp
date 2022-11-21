// cppreference link https://en.cppreference.com/w/cpp/ranges/adjacent_view/size
#include <ranges>

int main()
{
    constexpr static auto v = { 1, 2, 3, 4, 5, 6 };

    constexpr int width1 { 4 };
    constexpr auto view1 { std::views::adjacent<width1>(v) };
    static_assert(view1.size() == 3);
    static_assert(view1.size() == (v.size() - width1 + 1));

    constexpr int width2 { 8 };
    constexpr auto view2 { std::views::adjacent<width2>(v) };
    // window is too wide, so view2 has no elements:
    static_assert(view2.size() == 0);
}
