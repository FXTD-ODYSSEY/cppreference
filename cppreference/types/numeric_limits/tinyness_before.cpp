// cppreference link https://en.cppreference.com/w/cpp/types/numeric_limits/tinyness_before
#include <cfenv>
#include <cmath>
#include <iostream>
#include <limits>
int main()
{
    std::cout << "Tinyness before: " << std::boolalpha
              << std::numeric_limits<double>::tinyness_before << '\n';

    double denorm_max = std::nextafter(std::numeric_limits<double>::min(), 0);
    double multiplier = 1 + std::numeric_limits<double>::epsilon();

    std::feclearexcept(FE_ALL_EXCEPT);

    double result = denorm_max * multiplier; // Underflow only if tinyness_before

    if (std::fetestexcept(FE_UNDERFLOW))
        std::cout << "Underflow detected\n";

    std::cout << std::hexfloat << denorm_max << " x " << multiplier << " = "
              << result << '\n';
}
