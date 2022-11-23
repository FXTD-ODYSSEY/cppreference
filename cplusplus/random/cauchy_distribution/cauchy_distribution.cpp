// cplusplus link https://cplusplus.com/reference/random\cauchy_distribution\cauchy_distribution
// cauchy_distribution example
#include <chrono>
#include <iostream>
#include <random>

int main()
{
    // construct a trivial random generator engine from a time-based seed:
    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
    std::default_random_engine generator(seed);

    std::cauchy_distribution<double> distribution(0.0, 1.0);

    std::cout << "some Cauchy-distributed(0.0,1.0) results:" << std::endl;
    for (int i = 0; i < 5; ++i)
        std::cout << distribution(generator) << std::endl;

    return 0;
}
