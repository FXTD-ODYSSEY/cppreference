// cppreference link https://en.cppreference.com/w/cpp/numeric/special_functions/cyl_neumann
#include <cassert>
#include <cmath>
#include <iostream>
#include <numbers>

const double π = std::numbers::pi; // or std::acos(-1) in pre C++20

// To calculate the cylindrical Neumann function via cylindrical Bessel function of the
// first kind we have to implement the J₋ᵥ, because the direct invocation of the
// std::cyl_bessel_j(ν,x), per formula above, for negative ν raises 'std::domain_error':
// Bad argument in __cyl_bessel_j.

double Jᵥ_neg(double ν, double x)
{
    return std::cos(-ν * π) * std::cyl_bessel_j(-ν, x)
        - std::sin(-ν * π) * std::cyl_neumann(-ν, x);
}

double Jᵥ_pos(double ν, double x) { return std::cyl_bessel_j(ν, x); }

double Jᵥ(double ν, double x) { return ν < 0.0 ? Jᵥ_neg(ν, x) : Jᵥ_pos(ν, x); }

int main()
{
    std::cout << "spot checks for ν == 0.5\n"
              << std::fixed << std::showpos;
    double ν = 0.5;
    for (double x = 0.0; x <= 2.0; x += 0.333) {
        const double n = std::cyl_neumann(ν, x);
        const double j = (Jᵥ(ν, x) * std::cos(ν * π) - Jᵥ(-ν, x)) / std::sin(ν * π);
        std::cout << "N_.5(" << x << ") = " << n << ", calculated via J = " << j << '\n';
        assert(n == j);
    }
}
