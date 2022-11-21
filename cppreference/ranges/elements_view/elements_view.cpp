// cppreference link https://en.cppreference.com/w/cpp/ranges/elements_view/elements_view
#include <array>
#include <iostream>
#include <ranges>
#include <tuple>
using namespace std::literals;

int main()
{
    const std::array<std::tuple<int, char, std::string>, 2> vt {
        std::tuple { 1, 'A', "α"s },
        std::tuple { 2, 'B', "β"s },
    };

    [[maybe_unused]] auto empty = std::views::elements<0>;

    auto ev0 = std::views::elements<0>(vt);
    auto ev1 = std::views::elements<1>(vt);
    auto ev2 = std::views::elements<2>(vt);

    for (auto const& e : ev0) {
        std::cout << e << ' ';
    }
    std::cout << '\n';
    for (auto const& e : ev1) {
        std::cout << e << ' ';
    }
    std::cout << '\n';
    for (auto const& e : ev2) {
        std::cout << e << ' ';
    }
    std::cout << '\n';
}
