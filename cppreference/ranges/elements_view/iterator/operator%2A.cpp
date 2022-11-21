// cppreference link https://en.cppreference.com/w/cpp/ranges/elements_view/iterator/operator*
#include <iostream>
#include <ranges>
#include <string_view>
#include <tuple>

int main()
{
    using T = std::tuple<int, char, std::string_view>;

    const auto il = {
        T { 1, 'A', "α" },
        T { 2, 'B', "β" },
        T { 3, 'C', "γ" },
    };

    const auto view { il | std::views::elements<2> };

    const auto iter { view.begin() + 1 };

    std::cout << *iter << '\n';
}
