// cplusplus link https://cplusplus.com/reference/random\lognormal_distribution\operator%28%29
// lognormal_distribution example
#include <chrono>
#include <iostream>
#include <random>

int main()
{
    // construct a trivial random generator engine from a time-based seed:
    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
    std::default_random_engine generator(seed);

    std::lognormal_distribution<double> distribution(0.0, 1.0);

    std::cout << "some lognormal-distributed(0.0,1.0) results:" << std::endl;
    for (int i = 0; i < 10; ++i)
        std::cout << distribution(generator) << std::endl;

    return 0;
}
