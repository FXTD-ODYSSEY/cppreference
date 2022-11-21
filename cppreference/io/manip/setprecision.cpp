// cppreference link https://en.cppreference.com/w/cpp/io/manip/setprecision
#include <iomanip>
#include <iostream>
#include <limits>
#include <numbers>

int main()
{
    constexpr long double pi { std::numbers::pi_v<long double> };

    const auto default_precision { std::cout.precision() };
    constexpr auto max_precision { std::numeric_limits<long double>::digits10 + 1 };

    std::cout << "default precision: " << default_precision << '\n'
              << "maximum precision: " << max_precision << "\n\n"
                                                           "precision: pi:\n";

    for (int p { 0 }; p <= max_precision; ++p) {
        std::cout << std::setw(2) << p << "  " << std::setprecision(p) << pi << '\n';
    }

    std::cout << std::setprecision(default_precision); // restore defaults
}
