// cppreference link https://en.cppreference.com/w/cpp/ranges/subrange/operator_PairLike
#include <iostream>
#include <ranges>
#include <string>
#include <utility>

using legacy_strview = std::pair<
    std::string::const_iterator,
    std::string::const_iterator>;

void legacy_print(legacy_strview p)
{
    for (; p.first != p.second; ++p.first)
        std::cout << *p.first << ' ';
    std::cout << '\n';
}

int main()
{
    std::string dat { "ABCDE" };
    for (auto v { std::ranges::subrange { dat } }; v; v = { v.begin(), v.end() - 1 }) {
        /*...*/
        legacy_print(legacy_strview { v });
    }
}
