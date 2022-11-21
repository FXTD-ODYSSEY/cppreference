// cppreference link https://en.cppreference.com/w/cpp/numeric/lcm
#include <iostream>
#include <numeric>

#define OUT(...) std::cout << #__VA_ARGS__ << " = " << __VA_ARGS__ << '\n'

constexpr auto lcm(auto x, auto y)
{
    return std::lcm(x, y);
}
constexpr auto lcm(auto head, auto... tail)
{
    return std::lcm(head, lcm(tail...));
}

int main()
{
    constexpr int p { 2 * 2 * 3 };
    constexpr int q { 2 * 3 * 3 };
    static_assert(2 * 2 * 3 * 3 == std::lcm(p, q));
    static_assert(225 == std::lcm(45, 75));

    OUT(lcm(2 * 3, 3 * 4, 4 * 5));
    OUT(lcm(2 * 3 * 4, 3 * 4 * 5, 4 * 5 * 6));
    OUT(lcm(2 * 3 * 4, 3 * 4 * 5, 4 * 5 * 6, 5 * 6 * 7));
}
