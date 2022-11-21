// cppreference link https://en.cppreference.com/w/cpp/container/span/last
#include <iostream>
#include <span>
#include <string_view>

auto print = [](std::string_view const title, auto const& container) {
    std::cout << title << "[" << std::size(container) << "]{ ";
    for (auto const& elem : container)
        std::cout << elem << ", ";
    std::cout << "};\n";
};

void run(std::span<const int> span)
{
    print("span: ", span);

    std::span<const int, 3> span_last = span.last<3>();
    print("span.last<3>(): ", span_last);

    std::span<const int, std::dynamic_extent> span_last_dynamic = span.last(2);
    print("span.last(2):   ", span_last_dynamic);
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
    run(a);
}
