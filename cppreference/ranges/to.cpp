// cppreference link https://en.cppreference.com/w/cpp/ranges/to
#include <algorithm>
#include <concepts>
#include <iostream>
#include <ranges>
#include <vector>

int main()
{
    auto vec = std::views::iota(1, 5)
        | std::views::transform([](auto const v) { return v * 2; })
        | std::ranges::to<std::vector>();

    static_assert(std::same_as<decltype(vec), std::vector<int>>);

    std::ranges::for_each(vec, [](auto const v) { std::cout << v << ' '; });
}
