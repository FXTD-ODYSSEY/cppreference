// cplusplus link https://cplusplus.com/reference/random\binomial_distribution
// binomial_distribution
#include <iostream>
#include <random>

int main()
{
    const int nrolls = 10000; // number of experiments
    const int nstars = 100; // maximum number of stars to distribute

    std::default_random_engine generator;
    std::binomial_distribution<int> distribution(9, 0.5);

    int p[10] = {};

    for (int i = 0; i < nrolls; ++i) {
        int number = distribution(generator);
        ++p[number];
    }

    std::cout << "binomial_distribution (9,0.5):" << std::endl;
    for (int i = 0; i < 10; ++i)
        std::cout << i << ": " << std::string(p[i] * nstars / nrolls, '*') << std::endl;

    return 0;
}
