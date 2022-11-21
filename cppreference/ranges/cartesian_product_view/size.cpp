// cppreference link https://en.cppreference.com/w/cpp/ranges/cartesian_product_view/size
#include <ranges>

int main()
{
    constexpr static auto w = { 1 };
    constexpr static auto x = { 2, 3 };
    constexpr static auto y = { 4, 5, 6 };
    constexpr static auto z = { 7, 8, 9, 10, 11, 12, 13 };
    constexpr auto v = std::ranges::cartesian_product_view(w, x, y, z);
    static_assert(v.size() == w.size() * x.size() * y.size() * z.size() and v.size() == 42);
}
