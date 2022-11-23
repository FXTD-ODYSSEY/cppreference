// cplusplus link https://cplusplus.com/reference/random\piecewise_linear_distribution\reset
// piecewise_linear_distribution::reset
#include <iostream>
#include <random>

int main()
{
    std::default_random_engine generator;
    std::piecewise_linear_distribution<double>
        distribution(5, 0.0, 10.0, [](double x) { return x + 1.0; });

    // print two independent values:
    std::cout << distribution(generator) << std::endl;
    distribution.reset();
    std::cout << distribution(generator) << std::endl;

    return 0;
}
