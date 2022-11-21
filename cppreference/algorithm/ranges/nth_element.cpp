// cppreference link https://en.cppreference.com/w/cpp/algorithm/ranges/nth_element
#include <algorithm>
#include <array>
#include <functional>
#include <iostream>
#include <ranges>
#include <string_view>

void print(std::string_view rem, std::ranges::input_range auto const& a)
{
    for (std::cout << rem; const auto e : a)
        std::cout << e << ' ';
    std::cout << "\n";
}

int main()
{
    std::array v { 5, 6, 4, 3, 2, 6, 7, 9, 3 };
    print("Before nth_element: ", v);

    std::ranges::nth_element(v, v.begin() + v.size() / 2);
    print("After nth_element:  ", v);
    std::cout << "The median is: " << v[v.size() / 2] << '\n';

    std::ranges::nth_element(v, v.begin() + 1, std::greater<int>());
    print("After nth_element:  ", v);
    std::cout << "The second largest element is: " << v[1] << '\n';
    std::cout << "The largest element is: " << v[0] << "\n\n";

    using namespace std::literals;
    std::array names {
        "Diva"sv,
        "Cornelius"sv,
        "Munro"sv,
        "Rhod"sv,
        "Zorg"sv,
        "Korben"sv,
        "Bender"sv,
        "Leeloo"sv,
    };
    print("Before nth_element: ", names);
    auto fifth_element { std::ranges::next(names.begin(), 4) };
    std::ranges::nth_element(names, fifth_element);
    print("After nth_element:  ", names);
    std::cout << "The 5th element is: " << *fifth_element << '\n';
}
