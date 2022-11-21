// cppreference link https://en.cppreference.com/w/cpp/numeric/special_functions/cyl_bessel_i
#include <cmath>
#include <iostream>
int main()
{
    // spot check for ν == 0
    double x = 1.2345;
    std::cout << "I_0(" << x << ") = " << std::cyl_bessel_i(0, x) << '\n';

    // series expansion for I_0
    double fct = 1;
    double sum = 0;
    for (int k = 0; k < 5; fct *= ++k) {
        sum += std::pow((x / 2), 2 * k) / std::pow(fct, 2);
        std::cout << "sum = " << sum << '\n';
    }
}
