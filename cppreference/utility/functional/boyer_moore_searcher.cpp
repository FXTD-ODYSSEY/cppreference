// cppreference link https://en.cppreference.com/w/cpp/utility/functional/boyer_moore_searcher
#include <algorithm>
#include <functional>
#include <iomanip>
#include <iostream>
#include <string_view>

int main()
{
    constexpr std::string_view haystack = "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed "
                                          "do eiusmod tempor incididunt ut labore et dolore magna aliqua";

    const std::string_view needle { "pisci" };

    if (const auto it = std::search(haystack.begin(), haystack.end(),
            std::boyer_moore_searcher(needle.begin(), needle.end()));
        it != haystack.end()) {
        std::cout << "The string " << quoted(needle) << " found at offset "
                  << it - haystack.begin() << '\n';
    } else {
        std::cout << "The string " << std::quoted(needle) << " not found\n";
    }
}
