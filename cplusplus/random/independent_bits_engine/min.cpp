// cplusplus link https://cplusplus.com/reference/random\independent_bits_engine\min
// independent_bits_engine::min and max
#include <chrono>
#include <cstdint>
#include <iostream>
#include <random>

int main()
{
    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();

    std::independent_bits_engine<std::mt19937, 64, std::uint_fast64_t> generator(seed);

    std::cout << generator() << " is a random number between ";
    std::cout << generator.min() << " and " << generator.max();

    return 0;
}
