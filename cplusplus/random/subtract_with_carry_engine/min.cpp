// cplusplus link https://cplusplus.com/reference/random\subtract_with_carry_engine\min
// subtract_with_carry_engine::min and max
#include <chrono>
#include <iostream>
#include <random>

int main()
{
    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
    std::subtract_with_carry_engine<unsigned, 24, 10, 24> generator(seed);

    std::cout << generator() << " is a random number between ";
    std::cout << generator.min() << " and " << generator.max();

    return 0;
}
