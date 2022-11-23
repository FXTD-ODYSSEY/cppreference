// cplusplus link https://cplusplus.com/reference/random\discard_block_engine\operator%28%29
// discard_block_engine::operator()
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

    return 0;
}
