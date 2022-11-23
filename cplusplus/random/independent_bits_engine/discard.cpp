// cplusplus link https://cplusplus.com/reference/random\independent_bits_engine\discard
// independent_bits_engine::discard
#include <chrono>
#include <cstdint>
#include <iostream>
#include <random>

int main()
{
    // obtain a seed from the system clock:
    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();

    std::independent_bits_engine<std::mt19937, 64, std::uint_fast64_t> generator(seed);

    std::cout << "Random value: " << generator() << std::endl;

    generator.discard(1); // discard one element

    std::cout << "Random value: " << generator() << std::endl;

    return 0;
}
