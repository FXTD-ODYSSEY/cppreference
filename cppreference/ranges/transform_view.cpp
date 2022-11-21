// cppreference link https://en.cppreference.com/w/cpp/ranges/transform_view
#include <algorithm>
#include <cstdio>
#include <iterator>
#include <ranges>
#include <string>

char rot13a(const char x, const char a)
{
    return a + (x - a + 13) % 26;
}

char rot13(const char x)
{
    if (x >= 'A' && x <= 'Z') {
        return rot13a(x, 'A');
    }

    if (x >= 'a' && x <= 'z') {
        return rot13a(x, 'a');
    }

    return x;
}

int main()
{
    auto show = [](const unsigned char x) { std::putchar(x); };

    std::string in { "cppreference.com\n" };
    std::ranges::for_each(in, show);
    std::ranges::for_each(in | std::views::transform(rot13), show);

    std::string out;
    std::ranges::copy(std::views::transform(in, rot13), std::back_inserter(out));
    std::ranges::for_each(out, show);
    std::ranges::for_each(out | std::views::transform(rot13), show);
}
