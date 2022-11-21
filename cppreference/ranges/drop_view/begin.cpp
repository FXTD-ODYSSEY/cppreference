// cppreference link https://en.cppreference.com/w/cpp/ranges/drop_view/begin
#include <algorithm>
#include <array>
#include <iostream>
#include <iterator>
#include <ranges>

int main()
{
    std::array hi { 'H', 'e', 'l', 'l', 'o', ',', ' ', 'C', '+', '+', '2', '0', '!' };

    std::ranges::for_each(hi, [](const char c) { std::cout << c; });
    std::cout << '\n';

    const auto c = std::distance(hi.begin(), std::ranges::find(hi, 'C'));
    auto cxx = std::ranges::drop_view { hi, c };
    std::cout << "*drop_view::begin() == '" << *cxx.begin() << "'\n";

    //  *cxx.begin() = 'c'; // undefined: 'views' are to be used as observers

    for (char c : cxx) {
        std::cout << c;
    }
    std::cout << '\n';
}
