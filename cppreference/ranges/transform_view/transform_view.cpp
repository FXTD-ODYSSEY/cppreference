// cppreference link https://en.cppreference.com/w/cpp/ranges/transform_view/transform_view
#include <iomanip>
#include <iostream>
#include <numbers>
#include <ranges>

int main()
{
    std::cout << std::setprecision(15) << std::fixed;
    auto atan1term = std::ranges::views::transform(
        [](int n) { return ((n % 2) ? -1 : 1) * 1.0 / (2 * n + 1); });
    for (const int iterations : { 1, 2, 3, 4, 5, 10, 100, 1000, 1'000'000 }) {
        double accum { 0.0 };
        for (double term : std::ranges::views::iota(0, iterations) | atan1term) {
            accum += term;
        }
        std::cout << "π ~ " << 4 * accum << " (iterations: " << iterations << ")\n";
    }
    std::cout << "π ~ " << std::numbers::pi << " (std::numbers::pi)\n";
}
