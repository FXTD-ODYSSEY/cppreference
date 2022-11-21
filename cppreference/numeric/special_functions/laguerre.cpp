// cppreference link https://en.cppreference.com/w/cpp/numeric/special_functions/laguerre
#include <cmath>
#include <iostream>
double L1(double x) { return -x + 1; }
double L2(double x) { return 0.5 * (x * x - 4 * x + 2); }
int main()
{
    // spot-checks
    std::cout << std::laguerre(1, 0.5) << '=' << L1(0.5) << '\n'
              << std::laguerre(2, 0.5) << '=' << L2(0.5) << '\n'
              << std::laguerre(3, 0.0) << '=' << 1.0 << '\n';
}
