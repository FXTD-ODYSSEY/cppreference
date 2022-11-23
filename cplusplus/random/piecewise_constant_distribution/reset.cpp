// cplusplus link https://cplusplus.com/reference/random\piecewise_constant_distribution\reset
// piecewise_constant_distribution::reset
#include <iostream>
#include <random>

int main()
{
    std::default_random_engine generator;
    std::piecewise_constant_distribution<double> distribution(4, 0.0, 10.0, [](double x) { return x; });

    // print two independent values:
    std::cout << distribution(generator) << std::endl;
    distribution.reset();
    std::cout << distribution(generator) << std::endl;

    return 0;
}
