// cppreference link https://en.cppreference.com/w/cpp/numeric/valarray/operator_arith2
#include <iostream>
#include <string_view>
#include <type_traits>
#include <valarray>

void o(std::string_view rem, auto const& v, bool nl = false)
{
    if constexpr (std::is_scalar_v<std::decay_t<decltype(v)>>) {
        std::cout << rem << ": " << v;
    } else {
        for (std::cout << rem << ": { "; auto const e : v)
            std::cout << e << ' ';
        std::cout << "}";
    }
    std::cout << (nl ? "\n" : ";  ");
}

int main()
{
    std::valarray<int> x, y;

    o("x", x = { 1, 2, 3, 4 }), o("y", y = { 4, 3, 2, 1 }), o("x += y", x += y, 1);
    o("x", x = { 4, 3, 2, 1 }), o("y", y = { 3, 2, 1, 0 }), o("x -= y", x -= y, 1);
    o("x", x = { 1, 2, 3, 4 }), o("y", y = { 5, 4, 3, 2 }), o("x *= y", x *= y, 1);
    o("x", x = { 1, 3, 4, 7 }), o("y", y = { 1, 1, 3, 5 }), o("x &= y", x &= y, 1);
    o("x", x = { 0, 1, 2, 4 }), o("y", y = { 4, 3, 2, 1 }), o("x <<=y", x <<= y, 1);

    o("x", x = { 1, 2, 3, 4 }), o("x += 5", x += 5, 1);
    o("x", x = { 1, 2, 3, 4 }), o("x *= 2", x *= 2, 1);
    o("x", x = { 8, 6, 4, 2 }), o("x /= 2", x /= 2, 1);
    o("x", x = { 8, 4, 2, 1 }), o("x >>=1", x >>= 1, 1);
}
