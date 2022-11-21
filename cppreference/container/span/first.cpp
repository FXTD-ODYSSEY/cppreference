// cppreference link https://en.cppreference.com/w/cpp/container/span/first
#include <iostream>
#include <span>
#include <string_view>

void print(std::string_view const title,
    /* std::ranges::forward_range */ auto const& container)
{
    std::cout << title << "[" << std::size(container) << "]{ ";
    for (auto const& elem : container)
        std::cout << elem << ", ";
    std::cout << "};\n";
}

void run_game(std::span<const int> span)
{
    print("span: ", span);

    std::span<const int, 5> span_first = span.first<5>();
    print("span.first<5>(): ", span_first);

    std::span<const int, std::dynamic_extent> span_first_dynamic = span.first(4);
    print("span.first(4):   ", span_first_dynamic);
}

int main()
{
    int a[8] {
        1,
        2,
        3,
        4,
        5,
        6,
        7,
        8,
    };
    print("int  a", a);
    run_game(a);
}
