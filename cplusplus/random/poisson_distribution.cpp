// cplusplus link https://cplusplus.com/reference/random\poisson_distribution
// poisson_distribution
#include <iostream>
#include <random>

int main()
{
    const int nrolls = 10000; // number of experiments
    const int nstars = 100; // maximum number of stars to distribute

    std::default_random_engine generator;
    std::poisson_distribution<int> distribution(4.1);

    int p[10] = {};

    for (int i = 0; i < nrolls; ++i) {
        int number = distribution(generator);
        if (number < 10)
            ++p[number];
    }

    std::cout << "poisson_distribution (mean=4.1):" << std::endl;
    for (int i = 0; i < 10; ++i)
        std::cout << i << ": " << std::string(p[i] * nstars / nrolls, '*') << std::endl;

    return 0;
}
