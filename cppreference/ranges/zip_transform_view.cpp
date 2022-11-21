// cppreference link https://en.cppreference.com/w/cpp/ranges/zip_transform_view
#include <array>
#include <iostream>
#include <list>
#include <ranges>
#include <vector>

void print(auto const rem, auto const& r)
{
    for (std::cout << rem; auto const& e : r)
        std::cout << e << ' ';
    std::cout << '\n';
}

int main()
{
    auto v1 = std::vector<float> { 1, 2, 3 };
    auto v2 = std::list<short> { 1, 2, 3, 4 };
    auto v3 = std::to_array({ 1, 2, 3, 4, 5 });

    auto add = [](auto a, auto b, auto c) { return a + b + c; };

    auto sum = std::views::zip_transform(add, v1, v2, v3);

    print("v1:  ", v1);
    print("v2:  ", v2);
    print("v3:  ", v3);
    print("sum: ", sum);
}
