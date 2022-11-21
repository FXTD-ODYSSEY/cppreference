// cppreference link https://en.cppreference.com/w/cpp/numeric/valarray/asin
#include <cmath>
#include <iostream>
#include <numbers>
#include <valarray>

int main()
{
    // take common y-values from unit circle
    const double s22 = std::sqrt(2.0) / 2.0;
    const double s32 = std::sqrt(3.0) / 2.0;
    const std::valarray<double> v1 = { -1.0, -s32, -s22, -0.5, 0.0, 0.5, s22, s32, 1.0 };

    // fill with results of radians to degrees conversion
    const std::valarray<double> v2 = std::asin(v1) * 180.0 / std::numbers::pi;

    for (std::cout << std::showpos; double n : v2)
        std::cout << n << "° ";
    std::cout << '\n';
}
