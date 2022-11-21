// cppreference link https://en.cppreference.com/w/cpp/ranges/split_view/base
#include <iomanip>
#include <iostream>
#include <ranges>
#include <string_view>

int main()
{
    constexpr std::string_view keywords { "this throw true try typedef typeid" };
    std::ranges::split_view split_view { keywords, ' ' };
    std::cout << "base() = " << std::quoted(split_view.base()) << "\n"
                                                                  "substrings: ";
    for (std::string_view split : split_view)
        std::cout << quoted(split) << ' ';
}
