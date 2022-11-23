// cplusplus link https://cplusplus.com/reference/random\uniform_real_distribution\reset
// uniform_real_distribution::reset
#include <iostream>
#include <random>

int main()
{
    std::default_random_engine generator;
    std::uniform_real_distribution<double> distribution(0.0, 100.0);

    // print two independent values:
    std::cout << distribution(generator) << std::endl;
    distribution.reset();
    std::cout << distribution(generator) << std::endl;

    return 0;
}
