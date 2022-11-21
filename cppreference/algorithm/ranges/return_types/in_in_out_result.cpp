// cppreference link https://en.cppreference.com/w/cpp/algorithm/ranges/return_types/in_in_out_result
#include <algorithm>
#include <array>
#include <iostream>
#include <iterator>
#include <ranges>

void print(auto rem, auto first, auto last)
{
    for (std::cout << rem << ": "; first != last; ++first)
        std::cout << *first << ' ';
    std::cout << '\n';
}

int main()
{
    constexpr static auto in1 = { 1, 2, 3, 4, 5, 5 };
    constexpr static auto in2 = { 3, 4, 5, 6, 7 };
    std::array<int, std::size(in1) + std::size(in2)> out;

    const auto result = std::ranges::merge(in1, in2, out.begin());
    print("in1", in1.begin(), result.in1);
    print("in2", in2.begin(), result.in2);
    print("out", out.begin(), result.out);
}
