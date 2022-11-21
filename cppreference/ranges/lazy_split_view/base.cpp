// cppreference link https://en.cppreference.com/w/cpp/ranges/lazy_split_view/base
#include <iostream>
#include <ranges>
#include <string_view>

void print(std::string_view rem, auto const& r, std::string_view post = "\n")
{
    for (std::cout << rem; auto const& e : r)
        std::cout << e;
    std::cout << post;
}

int main()
{
    constexpr std::string_view keywords { "this,..throw,..true,..try,.." };
    constexpr std::string_view pattern { ",.." };
    constexpr std::ranges::lazy_split_view lazy_split_view { keywords, pattern };
    print("base() = [", lazy_split_view.base(), "]\n"
                                                "substrings: ");
    for (auto const& split : lazy_split_view)
        print("[", split, "] ");
}
