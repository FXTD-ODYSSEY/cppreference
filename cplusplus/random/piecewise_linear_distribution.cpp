// cplusplus link https://cplusplus.com/reference/random\piecewise_linear_distribution
// piecewise_linear_distribution
#include <array>
#include <iostream>
#include <random>

int main()
{
    const int nrolls = 10000; // number of experiments
    const int nstars = 100; // maximum number of stars to distribute

    std::default_random_engine generator;
    std::array<double, 3> intervals { 0.0, 4.5, 9.0 };
    std::array<double, 3> weights { 10.0, 0.0, 10.0 };
    std::piecewise_linear_distribution<double>
        distribution(intervals.begin(), intervals.end(), weights.begin());

    int p[10] = {};

    for (int i = 0; i < nrolls; ++i) {
        int number = distribution(generator);
        ++p[number];
    }

    std::cout << "a piecewise_linear_distribution:" << std::endl;
    for (int i = 0; i < 9; ++i) {
        std::cout << i << "-" << i + 1 << ": ";
        std::cout << std::string(p[i] * nstars / nrolls, '*') << std::endl;
    }
    return 0;
}
