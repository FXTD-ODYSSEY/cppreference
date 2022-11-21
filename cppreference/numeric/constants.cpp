// cppreference link https://en.cppreference.com/w/cpp/numeric/constants
#include <cmath>
#include <functional>
#include <iomanip>
#include <iostream>
#include <limits>
#include <numbers>
#include <string_view>

using std::placeholders::_2;
template <class T>
constexpr auto operator^(T base, decltype(_2)) { return base * base; }

int main()
{
    using namespace std::numbers;

    std::cout << "The answer is " << (((std::sin(e) ^ _2) + (std::cos(e) ^ _2)) + std::pow(e, ln2) + std::sqrt(pi) * inv_sqrtpi + ((std::cosh(pi) ^ _2) - (std::sinh(pi) ^ _2)) + sqrt3 * inv_sqrt3 * log2e * ln2 * log10e * ln10 * pi * inv_pi + (phi * phi - phi)) * ((sqrt2 * sqrt3) ^ _2) << '\n';

    auto egamma_aprox = [](unsigned const iterations) {
        long double s {}, m { 2.0 };
        for (unsigned c { 2 }; c != iterations; ++c, ++m) {
            const long double t { std::riemann_zeta(m) / m };
            (c & 1) == 0 ? s += t : s -= t;
        }
        return s;
    };

    constexpr std::string_view γ { "0.577215664901532860606512090082402" };

    std::cout
        << "γ as 10⁶ sums of ±ζ(m)/m   = "
        << egamma_aprox(1'000'000) << '\n'
        << "γ as egamma_v<float>       = "
        << std::setprecision(std::numeric_limits<float>::digits10 + 1)
        << egamma_v<float> << '\n'
        << "γ as egamma_v<double>      = "
        << std::setprecision(std::numeric_limits<double>::digits10 + 1)
        << egamma_v<double> << '\n'
        << "γ as egamma_v<long double> = "
        << std::setprecision(std::numeric_limits<long double>::digits10 + 1)
        << egamma_v<long double> << '\n'
        << "γ with " << γ.length() - 1 << " digits precision = " << γ << '\n';
}
