// cppreference link https://en.cppreference.com/w/cpp/ranges/lazy_split_view
#include <algorithm>
#include <iostream>
#include <ranges>
#include <string_view>

auto print = [](auto const& view) {
    // `view` is of std::views::lazy_split_view::__outer_iterator::value_type

    for (std::cout << "{ "; const auto element : view)
        std::cout << element << ' ';
    std::cout << "} ";
};

int main()
{
    constexpr static auto source = { 0, 1, 0, 2, 3, 0, 4, 5, 6, 0, 7, 8, 9 };
    constexpr int delimiter { 0 };
    constexpr std::ranges::lazy_split_view outer_view { source, delimiter };
    std::cout << "splits[" << std::ranges::distance(outer_view) << "]:  ";
    for (auto const& inner_view : outer_view)
        print(inner_view);

    constexpr std::string_view hello { "Hello C++ 20!" };
    std::cout << "\n"
                 "substrings: ";
    std::ranges::for_each(hello | std::views::lazy_split(' '), print);

    constexpr std::string_view text { "Hello-+-C++-+-20-+-!" };
    constexpr std::string_view delim { "-+-" };
    std::cout << "\n"
                 "substrings: ";
    std::ranges::for_each(text | std::views::lazy_split(delim), print);
}
