// cplusplus link https://cplusplus.com/reference/random\linear_congruential_engine\operator%28%29
// linear_congruential_engine::operator()
#include <chrono>
#include <iostream>
#include <random>

int main()
{
    // obtain a seed from the system clock:
    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();

    std::minstd_rand0 generator(seed); // minstd_rand0 is a standard linear_congruential_engine
    std::cout << "Random value: " << generator() << std::endl;

    return 0;
}
