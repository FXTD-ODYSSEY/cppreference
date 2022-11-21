// cppreference link https://en.cppreference.com/w/cpp/container/span/subspan
#include <algorithm>
#include <cstdio>
#include <numeric>
#include <ranges>
#include <span>

void display(std::span<const char> abc)
{
    const auto columns { 20U };
    const auto rows { abc.size() - columns + 1 };

    for (auto offset { 0U }; offset < rows; ++offset) {
        std::ranges::for_each(
            abc.subspan(offset, columns),
            std::putchar);
        std::putchar('\n');
    }
}

int main()
{
    char abc[26];
    std::iota(std::begin(abc), std::end(abc), 'A');
    display(abc);
}
