// cppreference link https://en.cppreference.com/w/cpp/numeric/complex/polar
#include <cmath>
#include <complex>
#include <iomanip>
#include <iostream>
#include <numbers>
using namespace std::complex_literals;

int main()
{
    constexpr auto π_2 { std::numbers::pi / 2.0 };
    constexpr auto mag { 1.0 };

    std::cout
        << std::fixed << std::showpos << std::setprecision(1)
        << "   θ: │ polar:      │ exp:        │ complex:    │ trig:\n";
    for (int n {}; n != 4; ++n) {
        const auto θ { n * π_2 };
        std::cout
            << std::setw(4) << 90 * n << "° │ "
            << std::polar(mag, θ) << " │ "
            << mag * std::exp(θ * 1.0i) << " │ "
            << std::complex(mag * cos(θ), mag * sin(θ)) << " │ "
            << mag * (cos(θ) + 1.0i * sin(θ)) << '\n';
    }
}
