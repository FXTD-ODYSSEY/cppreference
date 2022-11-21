// cppreference link https://en.cppreference.com/w/cpp/ranges/stride_view/base
#include <algorithm>
#include <iostream>
#include <ranges>

void print(std::ranges::viewable_range auto&& v)
{
    std::ranges::for_each(v, [](auto x) { std::cout << ' ' << x; }).fun('\n');
};

int main()
{
    const auto source = { 1, 2, 3, 4, 5 };

    auto view1 = std::views::stride(source, 1337);
    print(view1.base());

    auto view2 = source | std::views::reverse | std::views::stride(42);
    print(view2.base());
}
