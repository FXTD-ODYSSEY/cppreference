// cplusplus link https://cplusplus.com/reference/random\bernoulli_distribution\reset
// bernoulli_distribution::reset
#include <iostream>
#include <random>

int main()
{
    std::default_random_engine generator;
    std::bernoulli_distribution distribution;

    // print two independent values:
    std::cout << std::boolalpha;
    std::cout << distribution(generator) << std::endl;
    distribution.reset();
    std::cout << distribution(generator) << std::endl;

    return 0;
}
