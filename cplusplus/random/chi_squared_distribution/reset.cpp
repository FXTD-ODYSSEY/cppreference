// cplusplus link https://cplusplus.com/reference/random\chi_squared_distribution\reset
// chi_squared_distribution::reset
#include <iostream>
#include <random>

int main()
{
    std::default_random_engine generator;
    std::chi_squared_distribution<double> distribution(4.0);

    // print two independent values:
    std::cout << distribution(generator) << std::endl;
    distribution.reset();
    std::cout << distribution(generator) << std::endl;

    return 0;
}
