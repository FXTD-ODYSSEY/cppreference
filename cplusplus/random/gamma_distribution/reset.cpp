// cplusplus link https://cplusplus.com/reference/random\gamma_distribution\reset
// gamma_distribution::reset
#include <iostream>
#include <random>

int main()
{
    std::default_random_engine generator;
    std::gamma_distribution<double> distribution(2.0, 2.0);

    // print two independent values:
    std::cout << distribution(generator) << std::endl;
    distribution.reset();
    std::cout << distribution(generator) << std::endl;

    return 0;
}
