// cppreference link https://en.cppreference.com/w/cpp/numeric/special_functions/riemann_zeta
#include <cmath>
#include <iostream>
#include <numbers>
const auto π² = std::pow(std::numbers::pi, 2);
int main()
{
    // spot checks for well-known values
    std::cout << "ζ(-1) = " << std::riemann_zeta(-1) << '\n'
              << "ζ(0) = " << std::riemann_zeta(0) << '\n'
              << "ζ(1) = " << std::riemann_zeta(1) << '\n'
              << "ζ(0.5) = " << std::riemann_zeta(0.5) << '\n'
              << "ζ(2) = " << std::riemann_zeta(2) << ' '
              << "(π²/6 = " << π² / 6 << ")\n";
}
