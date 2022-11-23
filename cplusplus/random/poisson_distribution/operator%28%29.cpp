// cplusplus link https://cplusplus.com/reference/random\poisson_distribution\operator%28%29
// poisson_distribution example
#include <chrono>
#include <iostream>
#include <random>

int main()
{
    // construct a trivial random generator engine from a time-based seed:
    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
    std::default_random_engine generator(seed);

    std::poisson_distribution<int> distribution(7.1);

    std::cout << "some Poisson-distributed results (mean=7.1): ";
    for (int i = 0; i < 10; ++i)
        std::cout << distribution(generator) << " ";

    std::cout << std::endl;

    return 0;
}
