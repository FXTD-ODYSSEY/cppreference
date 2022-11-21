// cppreference link https://en.cppreference.com/w/cpp/container/span/rend
#include <algorithm>
#include <iostream>
#include <span>
#include <string_view>

void ascending(const std::span<const std::string_view> data,
    const std::string_view term)
{
    std::for_each(data.begin(), data.end(),
        [](const std::string_view x) { std::cout << x << " "; });
    std::cout << term;
}

void descending(const std::span<const std::string_view> data,
    const std::string_view term)
{
    std::for_each(data.rbegin(), data.rend(),
        [](const std::string_view x) { std::cout << x << " "; });
    std::cout << term;
}

int main()
{
    constexpr std::string_view bars[] { "▁", "▂", "▃", "▄", "▅", "▆", "▇", "█" };
    ascending(bars, " ");
    descending(bars, "\n");
}
