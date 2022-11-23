// cplusplus link https://cplusplus.com/reference/random\negative_binomial_distribution\reset
// negative_binomial_distribution::reset
#include <iostream>
#include <random>

int main()
{
    std::default_random_engine generator;
    std::negative_binomial_distribution<int> distribution(20, 0.5);

    // print two independent values:
    std::cout << distribution(generator) << std::endl;
    distribution.reset();
    std::cout << distribution(generator) << std::endl;

    return 0;
}
