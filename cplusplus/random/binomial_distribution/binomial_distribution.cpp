// cplusplus link https://cplusplus.com/reference/random\binomial_distribution\binomial_distribution
// binomial_distribution example
#include <chrono>
#include <iostream>
#include <random>

int main()
{
    // construct a trivial random generator engine from a time-based seed:
    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
    std::default_random_engine generator(seed);

    std::binomial_distribution<int> distribution(10, 0.5);

    std::cout << "some binomial results (t=10,p=0.5): ";
    for (int i = 0; i < 10; ++i)
        std::cout << distribution(generator) << " ";

    std::cout << std::endl;

    return 0;
}
