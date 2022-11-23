// cplusplus link https://cplusplus.com/reference/random\chi_squared_distribution
// chi_squared_distribution
#include <iostream>
#include <random>

int main()
{
    const int nrolls = 10000; // number of experiments
    const int nstars = 100; // maximum number of stars to distribute

    std::default_random_engine generator;
    std::chi_squared_distribution<double> distribution(3.0);

    int p[10] = {};

    for (int i = 0; i < nrolls; ++i) {
        double number = distribution(generator);
        if ((number >= 0.0) && (number < 10.0))
            ++p[int(number)];
    }

    std::cout << "chi_squared_distribution (3.0):" << std::endl;

    for (int i = 0; i < 10; ++i) {
        std::cout << i << "-" << (i + 1) << ": ";
        std::cout << std::string(p[i] * nstars / nrolls, '*') << std::endl;
    }

    return 0;
}
