// cppreference link https://en.cppreference.com/w/cpp/container/span/data
#include <iostream>
#include <span>

int main()
{
    constexpr char str[] = "ABCDEF\n";

    const std::span sp { str };

    for (auto n { sp.size() }; n != 2; --n) {
        std::cout << sp.last(n).data();
    }
}
