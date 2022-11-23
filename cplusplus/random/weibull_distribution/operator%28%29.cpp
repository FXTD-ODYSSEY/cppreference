// cplusplus link https://cplusplus.com/reference/random\weibull_distribution\operator%28%29
// weibull_distribution example
#include <chrono>
#include <iostream>
#include <random>

int main()
{
    // construct a trivial random generator engine from a time-based seed:
    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
    std::default_random_engine generator(seed);

    std::weibull_distribution<double> distribution(2.0, 1.0);

    std::cout << "some Weibull-distributed(2.0,1.0) results:" << std::endl;
    for (int i = 0; i < 10; ++i)
        std::cout << distribution(generator) << std::endl;

    return 0;
}
