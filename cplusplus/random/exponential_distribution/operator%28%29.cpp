// cplusplus link https://cplusplus.com/reference/random\exponential_distribution\operator%28%29
// exponential_distribution example
#include <chrono>
#include <iostream>
#include <random>
#include <thread>

int main()
{
    // construct a trivial random generator engine from a time-based seed:
    int seed = std::chrono::system_clock::now().time_since_epoch().count();
    std::default_random_engine generator(seed);

    std::exponential_distribution<double> distribution(1.0);

    std::cout << "ten beeps, spread by 1 second, on average: " << std::endl;
    for (int i = 0; i < 10; ++i) {
        double number = distribution(generator);
        std::chrono::duration<double> period(number);
        std::this_thread::sleep_for(period);
        std::cout << "beep!" << std::endl;
    }

    return 0;
}
