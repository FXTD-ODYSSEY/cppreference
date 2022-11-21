// cppreference link https://en.cppreference.com/w/cpp/algorithm/ranges/return_types/in_out_out_result
#include <algorithm>
#include <array>
#include <cctype>
#include <iostream>
#include <iterator>
#include <ranges>
#include <string_view>

void print(std::string_view rem, auto first, auto last)
{
    for (std::cout << rem << ": { "; first != last; ++first)
        std::cout << *first << ' ';
    std::cout << "}\n";
}

int main()
{
    constexpr std::string_view in { "TvEeNcStOoRr" };
    std::array<char, in.size()> o1, o2;

    const auto result = std::ranges::partition_copy(in, o1.begin(), o2.begin(),
        [](char c) { return std::isupper(c); });

    print("in", in.begin(), result.in);
    print("o1", o1.begin(), result.out1);
    print("o2", o2.begin(), result.out2);
}
