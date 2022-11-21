// cppreference link https://en.cppreference.com/w/cpp/ranges/drop_view/end
#include <algorithm>
#include <iostream>
#include <iterator>
#include <ranges>

int main()
{
    constexpr char url[] { "https://cppreference.com" };

    const auto p = std::distance(std::ranges::begin(url), std::ranges::find(url, '/'));
    auto site = std::ranges::drop_view { url, p + 2 }; // drop the prefix "https://"

    for (auto it = site.begin(); it != site.end(); ++it)
        std::cout << *it; //                ^^^
    std::cout << '\n';
}
