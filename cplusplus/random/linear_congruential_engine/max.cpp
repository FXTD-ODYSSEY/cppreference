// cplusplus link https://cplusplus.com/reference/random\linear_congruential_engine\max
// linear_congruential_engine::min and max
#include <chrono>
#include <iostream>
#include <random>

int main()
{
    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
    std::minstd_rand0 generator(seed); // minstd_rand0 is a standard linear_congruential_engine

    std::cout << generator() << " is a random number between ";
    std::cout << generator.min() << " and " << generator.max();

    return 0;
}
