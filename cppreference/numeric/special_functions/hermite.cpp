// cppreference link https://en.cppreference.com/w/cpp/numeric/special_functions/hermite
#include <cmath>
#include <iostream>
double H3(double x) { return 8 * std::pow(x, 3) - 12 * x; }
double H4(double x) { return 16 * std::pow(x, 4) - 48 * x * x + 12; }
int main()
{
    // spot-checks
    std::cout << std::hermite(3, 10) << '=' << H3(10) << '\n'
              << std::hermite(4, 10) << '=' << H4(10) << '\n';
}
