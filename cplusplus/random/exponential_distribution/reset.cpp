// cplusplus link https://cplusplus.com/reference/random\exponential_distribution\reset
// exponential_distribution::reset
#include <iostream>
#include <random>

int main()
{
    std::default_random_engine generator;
    std::exponential_distribution<double> distribution(1.0);

    // print two independent values:
    std::cout << distribution(generator) << std::endl;
    distribution.reset();
    std::cout << distribution(generator) << std::endl;

    return 0;
}
