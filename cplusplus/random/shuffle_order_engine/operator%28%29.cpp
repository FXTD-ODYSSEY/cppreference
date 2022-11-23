// cplusplus link https://cplusplus.com/reference/random\shuffle_order_engine\operator%28%29
// shuffle_order_engine::operator()
#include <chrono>
#include <iostream>
#include <random>

int main()
{
    // obtain a seed from the system clock:
    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();

    // knuth_b is a standard shuffle_order_engine type:
    std::knuth_b generator(seed);
    std::cout << "Random value: " << generator() << std::endl;

    return 0;
}
