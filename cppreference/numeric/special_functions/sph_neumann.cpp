// cppreference link https://en.cppreference.com/w/cpp/numeric/special_functions/sph_neumann
#include <cmath>
#include <iostream>
int main()
{
    // spot check for n == 1
    double x = 1.2345;
    std::cout << "n_1(" << x << ") = " << std::sph_neumann(1, x) << '\n';

    // exact solution for n_1
    std::cout << "-(cos x)/x² - (sin x)/x = "
              << -std::cos(x) / (x * x) - std::sin(x) / x << '\n';
}
