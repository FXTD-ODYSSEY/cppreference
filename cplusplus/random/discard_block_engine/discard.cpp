// cplusplus link https://cplusplus.com/reference/random\discard_block_engine\discard
// discard_block_engine::discard
#include <chrono>
#include <iostream>
#include <random>

int main()
{
    // obtain a seed from the system clock:
    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();

    // ranlux24 is a standard instantitation of discard_block_engine:
    std::ranlux24 generator(seed);

    std::cout << "Random value: " << generator() << std::endl;

    generator.discard(generator.used_block); // advance an entire block

    std::cout << "Random value: " << generator() << std::endl;

    return 0;
}
