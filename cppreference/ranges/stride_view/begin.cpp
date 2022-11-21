// cppreference link https://en.cppreference.com/w/cpp/ranges/stride_view/begin
#include <print>
#include <ranges>

int main()
{
    constexpr auto v = { 'A', 'B', 'C' };
    const auto x = v | std::views::stride(2);
    const auto y = v | std::views::reverse | std::views::stride(2);
    const auto z = v | std::views::stride(2) | std::views::reverse;
    std::println("{} {} {}", *x.begin(), *y.begin(), *z.begin());
}
