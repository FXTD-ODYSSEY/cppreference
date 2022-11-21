// cppreference link https://en.cppreference.com/w/cpp/ranges/basic_istream_view
#include <algorithm>
#include <iomanip>
#include <iostream>
#include <iterator>
#include <ranges>
#include <sstream>
#include <string>

int main()
{
    auto words = std::istringstream { "today is yesterday’s tomorrow" };
    for (const auto& s : std::ranges::istream_view<std::string>(words)) {
        std::cout << std::quoted(s, '/') << ' ';
    }
    std::cout << '\n';

    auto floats = std::istringstream { "1.1  2.2\t3.3\v4.4\f55\n66\r7.7  8.8" };
    std::ranges::copy(
        std::ranges::istream_view<float>(floats),
        std::ostream_iterator<float> { std::cout, ", " });
    std::cout << '\n';
}
