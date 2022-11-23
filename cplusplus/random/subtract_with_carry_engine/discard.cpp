// cplusplus link https://cplusplus.com/reference/random\subtract_with_carry_engine\discard
// subtract_with_carry_engine::discard
#include <chrono>
#include <iostream>
#include <random>

int main()
{
    // obtain a seed from the system clock:
    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();

    std::subtract_with_carry_engine<unsigned, 24, 10, 24> generator(seed);

    std::cout << "Random value: " << generator() << std::endl;
    generator.discard(1);
    std::cout << "Random value: " << generator() << std::endl;

    return 0;
}
