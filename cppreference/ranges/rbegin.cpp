// cppreference link https://en.cppreference.com/w/cpp/ranges/rbegin
#include <iostream>
#include <ranges>
#include <span>
#include <vector>

int main()
{
    std::vector<int> v = { 3, 1, 4 };
    auto vi = std::ranges::rbegin(v);
    std::cout << *vi << '\n';
    *vi = 42; // OK

    int a[] = { -5, 10, 15 };
    auto ai = std::ranges::rbegin(a);
    std::cout << *ai << '\n';
    *ai = 42; // OK

    // auto x_x = std::ranges::rbegin(std::vector{6,6,6});
    // ill-formed: the argument is an rvalue (see Notes ↑)

    auto si = std::ranges::rbegin(std::span { a }); // OK:
    static_assert(std::ranges::enable_borrowed_range<
        std::remove_cv_t<decltype(std::span { a })>>);
    *si = 42; // OK
}
