// cplusplus link https://cplusplus.com/reference/random\uniform_int_distribution\operator%28%29
// uniform_int_distribution::operator()
#include <chrono>
#include <iostream>
#include <random>

int main()
{
    // construct a trivial random generator engine from a time-based seed:
    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
    std::default_random_engine generator(seed);

    std::uniform_int_distribution<int> distribution(1, 10);

    std::cout << "some random numbers between 1 and 10: ";
    for (int i = 0; i < 10; ++i)
        std::cout << distribution(generator) << " ";

    std::cout << std::endl;

    return 0;
}
