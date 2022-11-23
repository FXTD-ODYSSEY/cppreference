// cplusplus link https://cplusplus.com/reference/random\binomial_distribution\reset
// binomial_distribution::reset
#include <iostream>
#include <random>

int main()
{
    std::default_random_engine generator;
    std::binomial_distribution<int> distribution(100, 0.5);

    // print two independent values:
    std::cout << distribution(generator) << std::endl;
    distribution.reset();
    std::cout << distribution(generator) << std::endl;

    return 0;
}
