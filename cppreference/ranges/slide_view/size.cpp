// cppreference link https://en.cppreference.com/w/cpp/ranges/slide_view/size
#include <forward_list>
#include <iostream>
#include <list>
#include <ranges>

int main()
{
    constexpr static auto v = { 1, 2, 3, 4, 5, 6 };

    constexpr int width1 { 4 };
    constexpr auto view1 { std::views::slide(v, width1) };
    static_assert(view1.size() == 3);
    static_assert(view1.size() == (v.size() - width1 + 1));

    constexpr int width2 { 8 };
    constexpr auto view2 { std::views::slide(v, width2) };
    // window is too wide, so view2 has no elements:
    static_assert(view2.size() == 0);

    std::forward_list forward_list = v;
    const auto view3 { std::views::slide(forward_list, width1) };
    //  auto x = view3.size(); // error: sized_range constraint is not satisfied

    std::list list = v;
    const auto view4 { std::views::slide(list, width1) };
    std::cout << view4.size() << '\n'; // prints 3
}
