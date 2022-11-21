// cppreference link https://en.cppreference.com/w/cpp/ranges/take_view/end
#include <iostream>
#include <iterator>
#include <list>
#include <ranges>
#include <type_traits>

int main()
{
    const auto list1 = { 3, 1, 4, 1, 5 };
    const auto seq1 = list1 | std::views::take(4);
    static_assert(std::ranges::sized_range<decltype(seq1)> and std::ranges::random_access_range<decltype(seq1)> and std::is_same_v<decltype(seq1.end()), decltype(list1.end())>);
    for (auto it = seq1.begin(); it != seq1.end(); ++it)
        std::cout << *it << ' ';
    std::cout << '\n';

    std::list list2 = { 2, 7, 1, 8, 2 };
    const auto seq2 = list2 | std::views::take(4);
    static_assert(std::ranges::sized_range<decltype(seq2)> and not std::ranges::random_access_range<decltype(seq2)> and std::is_same_v<decltype(seq2.end()), std::default_sentinel_t>);
    for (auto it = seq2.begin(); it != std::default_sentinel; ++it)
        std::cout << *it << ' ';
    std::cout << '\n';
}
