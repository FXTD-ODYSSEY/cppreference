// cplusplus link https://cplusplus.com/reference/random\mersenne_twister_engine\discard
// mersenne_twister_engine::discard
#include <chrono>
#include <iostream>
#include <random>

int main()
{
    // obtain a seed from the system clock:
    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();

    std::mt19937 generator(seed); // mt19937 is a standard mersenne_twister_engine

    std::cout << "Random value: " << generator() << std::endl;

    generator.discard(generator.state_size); // twist the entire state sequence

    std::cout << "Random value: " << generator() << std::endl;

    return 0;
}
