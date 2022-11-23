// cplusplus link https://cplusplus.com/reference/random\extreme_value_distribution
// extreme_value_distribution
#include <iostream>
#include <random>

int main()
{
    const int nrolls = 10000; // number of experiments
    const int nstars = 100; // maximum number of stars to distribute
    const int nintervals = 20; // number of intervals
    const int first = -5; // first interval

    std::default_random_engine generator;
    std::extreme_value_distribution<double> distribution(2.0, 4.0);

    int p[nintervals] = {};

    for (int i = 0; i < nrolls; ++i) {
        double number = distribution(generator);
        if ((number >= -5.0) && (number < 15.0))
            ++p[int(number - first)];
    }

    std::cout << "extreme_value_distribution (2.0,4.0):" << std::endl;

    for (int i = 0; i < nintervals; ++i) {
        std::cout.width(2);
        std::cout << float(first + i) << "..";
        std::cout.width(2);
        std::cout << float(first + i + 1) << ": ";
        std::cout << std::string(p[i] * nstars / nrolls, '*') << std::endl;
    }

    return 0;
}
