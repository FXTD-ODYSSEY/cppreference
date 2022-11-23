// cplusplus link https://cplusplus.com/reference/random\independent_bits_engine\operator%28%29
// independent_bits_engine::operator()
#include <chrono>
#include <iostream>
#include <random>

int main()
{
    // obtain a seed from the system clock:
    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();

    std::independent_bits_engine<std::mt19937, 64, std::uint_fast64_t> generator(seed);
    std::cout << "Random value: " << generator() << std::endl;

    return 0;
}
