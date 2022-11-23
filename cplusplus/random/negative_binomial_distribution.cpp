// cplusplus link https://cplusplus.com/reference/random\negative_binomial_distribution
// negative_binomial_distribution
#include <iostream>
#include <random>

int main()
{
    const int nrolls = 10000; // number of experiments
    const int nstars = 100; // maximum number of stars to distribute

    std::default_random_engine generator;
    std::negative_binomial_distribution<int> distribution(3, 0.5);

    int p[10] = {};

    for (int i = 0; i < nrolls; ++i) {
        int number = distribution(generator);
        if (number < 10)
            ++p[number];
    }

    std::cout << "negative_binomial_distribution (k=3,p=0.5):" << std::endl;
    for (int i = 0; i < 10; ++i)
        std::cout << i << ": " << std::string(p[i] * nstars / nrolls, '*') << std::endl;

    return 0;
}
