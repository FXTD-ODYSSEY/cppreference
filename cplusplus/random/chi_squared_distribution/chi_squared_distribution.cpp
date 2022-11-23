// cplusplus link https://cplusplus.com/reference/random\chi_squared_distribution\chi_squared_distribution
// chi_squared_distribution example
#include <chrono>
#include <iostream>
#include <random>

int main()
{
    // construct a trivial random generator engine from a time-based seed:
    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
    std::default_random_engine generator(seed);

    std::chi_squared_distribution<double> distribution(4.0);

    std::cout << "some chi-square-distributed(4.0) results:" << std::endl;
    for (int i = 0; i < 5; ++i)
        std::cout << distribution(generator) << std::endl;

    return 0;
}
