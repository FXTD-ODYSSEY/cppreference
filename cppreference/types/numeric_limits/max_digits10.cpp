// cppreference link https://en.cppreference.com/w/cpp/types/numeric_limits/max_digits10
#include <cmath>
#include <iomanip>
#include <iostream>
#include <limits>
#include <sstream>

int main()
{
    float value = 10.0000086;

    constexpr auto digits10 = std::numeric_limits<decltype(value)>::digits10;
    constexpr auto max_digits10 = std::numeric_limits<decltype(value)>::max_digits10;
    constexpr auto submax_digits10 = max_digits10 - 1;

    std::cout
        << "float:\n"
        << "       digits10 is " << digits10 << " digits" << '\n'
        << "   max_digits10 is " << max_digits10 << " digits" << '\n'
        << "submax_digits10 is " << submax_digits10 << " digits" << '\n'
        << '\n';

    const auto original_precision = std::cout.precision();
    for (auto i = 0; i < 5; ++i) {
        std::cout
            << "   max_digits10: " << std::setprecision(max_digits10) << value << '\n'
            << "submax_digits10: " << std::setprecision(submax_digits10) << value << '\n'
            << '\n';

        value = std::nextafter(value, std::numeric_limits<decltype(value)>::max());
    }
    std::cout.precision(original_precision);
}
