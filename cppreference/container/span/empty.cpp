// cppreference link https://en.cppreference.com/w/cpp/container/span/empty
#include <iomanip>
#include <iostream>
#include <span>

int main()
{
    std::span<const char> span { "ABCDEF" };

    while (!span.empty()) {
        std::cout << std::quoted(span.data()) << '\n';
        span = span.last(span.size() - 1);
    }
}
