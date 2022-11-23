// cplusplus link https://cplusplus.com/reference/random\lognormal_distribution\reset
// lognormal_distribution::reset
#include <iostream>
#include <random>

int main()
{
    std::default_random_engine generator;
    std::lognormal_distribution<double> distribution(0.0, 1.0);

    // print two independent values:
    std::cout << distribution(generator) << std::endl;
    distribution.reset();
    std::cout << distribution(generator) << std::endl;

    return 0;
}
