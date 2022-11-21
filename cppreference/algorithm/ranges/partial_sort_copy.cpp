// cppreference link https://en.cppreference.com/w/cpp/algorithm/ranges/partial_sort_copy
#include <algorithm>
#include <forward_list>
#include <functional>
#include <iostream>
#include <ranges>
#include <string_view>
#include <vector>

void print(std::string_view rem, std::ranges::input_range auto const& v)
{
    for (std::cout << rem; const auto& e : v)
        std::cout << e << ' ';
    std::cout << '\n';
}

int main()
{
    const std::forward_list source { 4, 2, 5, 1, 3 };

    print("Write to the smaller vector in ascending order: ", "");

    std::vector dest1 { 10, 11, 12 };
    print("const source list: ", source);
    print("destination range: ", dest1);
    std::ranges::partial_sort_copy(source, dest1);
    print("partial_sort_copy: ", dest1);

    print("Write to the larger vector in descending order:", "");

    std::vector dest2 { 10, 11, 12, 13, 14, 15, 16 };
    print("const source list: ", source);
    print("destination range: ", dest2);
    std::ranges::partial_sort_copy(source, dest2, std::greater {});
    print("partial_sort_copy: ", dest2);
}
