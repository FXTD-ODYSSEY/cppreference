// cppreference link https://en.cppreference.com/w/cpp/algorithm/search
#include <algorithm>
#include <functional>
#include <iomanip>
#include <iostream>
#include <string_view>
#include <vector>
using namespace std::literals;

bool contains(const auto& cont, std::string_view s)
{
    // str.find() (or str.contains(), since C++23) can be used as well
    return std::search(cont.begin(), cont.end(), s.begin(), s.end()) != cont.end();
}

int main()
{
    const auto str { "why waste time learning, when ignorance is instantaneous?"sv };

    std::cout << std::boolalpha
              << contains(str, "learning") << '\n' // true
              << contains(str, "lemming") << '\n'; // false

    const std::vector vec(str.begin(), str.end());
    std::cout << contains(vec, "learning") << '\n' // true
              << contains(vec, "leaning") << '\n'; // false

    // The C++17 overload with searchers demo:
    constexpr auto haystack {
        "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed "
        "do eiusmod tempor incididunt ut labore et dolore magna aliqua"sv
    };

    for (const auto needle : { "pisci"sv, "Pisci"sv }) {
        const std::boyer_moore_searcher searcher(needle.begin(), needle.end());
        const auto it = std::search(haystack.begin(), haystack.end(), searcher);
        std::cout << "The string " << std::quoted(needle) << ' ';
        if (it == haystack.end())
            std::cout << "not found\n";
        else
            std::cout << "found at offset " << it - haystack.begin() << '\n';
    }
}
