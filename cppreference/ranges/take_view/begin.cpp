// cppreference link https://en.cppreference.com/w/cpp/ranges/take_view/begin
#include <concepts>
#include <forward_list>
#include <iostream>
#include <ranges>
#include <string_view>
#include <type_traits>
using namespace std::literals;

int main()
{
    {
        static constexpr auto v = { "∀x"sv, "∃y"sv, "ε"sv, "δ"sv };
        auto view = std::ranges::take_view(v, 8);
        auto iter = view.begin();
        std::cout << *iter << '\n';
        static_assert(
            std::ranges::sized_range<decltype(v)> and std::ranges::random_access_range<decltype(v)> and std::is_same_v<decltype(iter), decltype(std::ranges::begin(v))>);
    }

    {
        std::forward_list v = { "Ax"sv, "Ey"sv, "p"sv, "q"sv };
        auto view = std::ranges::take_view(v, 8);
        auto iter = view.begin();
        std::cout << *iter << '\n';
        static_assert(
            not std::ranges::sized_range<decltype(v)> and not std::ranges::random_access_range<decltype(v)> and std::is_same_v<decltype(iter), std::counted_iterator<std::forward_list<std::string_view>::iterator>>);
    }
}
