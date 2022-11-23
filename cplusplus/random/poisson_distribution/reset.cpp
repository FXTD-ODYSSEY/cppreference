// cplusplus link https://cplusplus.com/reference/random\poisson_distribution\reset
// poisson_distribution::reset
#include <iostream>
#include <random>

int main()
{
    std::default_random_engine generator;
    std::poisson_distribution<int> distribution(4.9);

    // print two independent values:
    std::cout << distribution(generator) << std::endl;
    distribution.reset();
    std::cout << distribution(generator) << std::endl;

    return 0;
}
