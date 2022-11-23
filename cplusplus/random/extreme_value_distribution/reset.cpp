// cplusplus link https://cplusplus.com/reference/random\extreme_value_distribution\reset
// extreme_value_distribution::reset
#include <iostream>
#include <random>

int main()
{
    std::default_random_engine generator;
    std::extreme_value_distribution<double> distribution(0.0, 1.0);

    // print two independent values:
    std::cout << distribution(generator) << std::endl;
    distribution.reset();
    std::cout << distribution(generator) << std::endl;

    return 0;
}
