// cplusplus link https://cplusplus.com/reference/random\piecewise_linear_distribution\piecewise_linear_distribution
// piecewise_linear_distribution constructor
#include <array>
#include <chrono>
#include <cmath>
#include <iostream>
#include <random>

double square(double val) { return val * val; }

int main()
{
    // construct a trivial random generator engine from a time-based seed:
    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
    std::default_random_engine generator(seed);

    std::array<double, 5> intervals { 0.0, 10.0, 20.0, 30.0, 40.0 };
    std::array<double, 5> weights { 10.0, 0.0, 5.0, 0.0, 10.0 };

    typedef std::piecewise_linear_distribution<double> distribution_type;
    distribution_type first;
    distribution_type second(intervals.begin(), intervals.end(), weights.begin());
    distribution_type third({ 0.0, 10.0, 15.0, 20.0, 22.0 }, square);
    distribution_type fourth(4, 0.0, 10.0, [](double x) { return std::sqrt(2 * x); });
    distribution_type fifth(fourth.param());

    std::cout << "characteristics of fifth:" << std::endl;
    std::cout << "intervals: ";
    for (double x : fifth.intervals())
        std::cout << x << " ";
    std::cout << std::endl;
    std::cout << "densities: ";
    for (double x : fifth.densities())
        std::cout << x << " ";
    std::cout << std::endl;

    return 0;
}
