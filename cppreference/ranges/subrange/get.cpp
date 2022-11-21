// cppreference link https://en.cppreference.com/w/cpp/ranges/subrange/get
#include <array>
#include <iostream>
#include <iterator>
#include <ranges>

int main()
{
    std::array a { 1, -2, 3, -4 };

    std::ranges::subrange sub_a { std::next(a.begin()), std::prev(a.end()) };

    std::cout << *std::ranges::get<0>(sub_a) << ' ' // == *(begin(a) + 1)
              << *std::get<1>(sub_a) << '\n'; // == *(end(a) - 1)

    *std::get<0>(sub_a) = 42; // OK
    //  *std::get<2>(sub_a) = 13; // hard error: index can only be 0 or 1
}
