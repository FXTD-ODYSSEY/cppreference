// cplusplus link https://cplusplus.com/reference/random\student_t_distribution\student_t_distribution
// student_t_distribution example
#include <chrono>
#include <iostream>
#include <random>

int main()
{
    // construct a trivial random generator engine from a time-based seed:
    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
    std::default_random_engine generator(seed);

    std::student_t_distribution<double> distribution(10.0);

    std::cout << "some T-distributed(10.0) results:" << std::endl;
    for (int i = 0; i < 5; ++i)
        std::cout << distribution(generator) << std::endl;

    return 0;
}
