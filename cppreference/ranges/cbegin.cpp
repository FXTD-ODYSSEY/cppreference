// cppreference link https://en.cppreference.com/w/cpp/ranges/cbegin
#include <iostream>
#include <ranges>
#include <vector>

int main()
{
    std::vector<int> v = { 3, 1, 4 };
    auto vi = std::ranges::cbegin(v);
    std::cout << *vi << '\n';
    // *vi = 42; // Error: read-only variable is not assignable

    int a[] = { -5, 10, 15 };
    auto ai = std::ranges::cbegin(a);
    std::cout << *ai << '\n';
    // *ai = 42; // Error: read-only variable is not assignable
}
