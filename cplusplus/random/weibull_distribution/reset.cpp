// cplusplus link https://cplusplus.com/reference/random\weibull_distribution\reset
// weibull_distribution::reset
#include <iostream>
#include <random>

int main()
{
    std::default_random_engine generator;
    std::weibull_distribution<double> distribution(1.0, 5.0);

    // print two independent values:
    std::cout << distribution(generator) << std::endl;
    distribution.reset();
    std::cout << distribution(generator) << std::endl;

    return 0;
}
