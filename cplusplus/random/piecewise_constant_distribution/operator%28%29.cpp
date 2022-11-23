// cplusplus link https://cplusplus.com/reference/random\piecewise_constant_distribution\operator%28%29
// piecewise_constant_distribution::operator()
#include <chrono>
#include <iostream>
#include <random>

int main()
{
    // construct a trivial random generator engine from a time-based seed:
    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
    std::default_random_engine generator(seed);

    std::piecewise_constant_distribution<double> distribution(4, 0.0, 10.0, [](double x) { return x; });

    std::cout << "intervals : ";
    for (double x : distribution.intervals())
        std::cout << x << " ";
    std::cout << std::endl;
    std::cout << "densities : ";
    for (double x : distribution.densities())
        std::cout << x << " ";
    std::cout << std::endl;

    return 0;
}
