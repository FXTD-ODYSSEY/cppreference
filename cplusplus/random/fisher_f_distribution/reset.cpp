// cplusplus link https://cplusplus.com/reference/random\fisher_f_distribution\reset
// fisher_f_distribution::reset
#include <iostream>
#include <random>

int main()
{
    std::default_random_engine generator;
    std::fisher_f_distribution<double> distribution(2.0, 2.0);

    // print two independent values:
    std::cout << distribution(generator) << std::endl;
    distribution.reset();
    std::cout << distribution(generator) << std::endl;

    return 0;
}
