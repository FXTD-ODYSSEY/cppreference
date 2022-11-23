// cplusplus link https://cplusplus.com/reference/random\poisson_distribution\poisson_distribution
// poisson_distribution example
#include <chrono>
#include <iostream>
#include <random>

int main()
{
    // construct a trivial random generator engine from a time-based seed:
    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
    std::default_random_engine generator(seed);

    std::poisson_distribution<int> distribution(5.2);

    std::cout << "some Poisson-distributed results (mean=5.2): ";
    for (int i = 0; i < 10; ++i)
        std::cout << distribution(generator) << " ";

    std::cout << std::endl;

    return 0;
}
