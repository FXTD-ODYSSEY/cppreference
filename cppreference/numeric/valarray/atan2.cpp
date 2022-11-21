// cppreference link https://en.cppreference.com/w/cpp/numeric/valarray/atan2
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <valarray>

void show(char const* title, const std::valarray<double>& va)
{
    std::cout << title << " ";
    std::for_each(std::begin(va), std::end(va), [](const double x) {
        std::cout << " " << std::right << std::setw(4) << x << "°";
    });
    std::cout << '\n';
}

const double pi = std::acos(-1.0); // C++20: std::numbers::pi

int main()
{
    auto degrees_to_radians = [](double const& x) { return (pi * x / 180); };
    auto radians_to_degrees = [](double const& x) { return (180 * x / pi); };

    const std::valarray<double> degrees { -90, -60, -45, -30, 0, 30, 45, 60, 90 };
    const std::valarray<double> radians = degrees.apply(degrees_to_radians);

    const auto sin = std::sin(radians);
    const auto cos = std::cos(radians);

    show("(1)", std::atan2(sin, cos).apply(radians_to_degrees));
    show("(2)", std::atan2(sin / cos, 1.0).apply(radians_to_degrees));
    show("(3)", std::atan2(1.0, cos / sin).apply(radians_to_degrees));
}
