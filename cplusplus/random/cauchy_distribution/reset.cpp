// cplusplus link https://cplusplus.com/reference/random\cauchy_distribution\reset
// cauchy_distribution::reset
#include <iostream>
#include <random>

int main()
{
    std::default_random_engine generator;
    std::cauchy_distribution<double> distribution(0.0, 1.0);

    // print two independent values:
    std::cout << distribution(generator) << std::endl;
    distribution.reset();
    std::cout << distribution(generator) << std::endl;

    return 0;
}
