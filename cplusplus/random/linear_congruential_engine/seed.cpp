// cplusplus link https://cplusplus.com/reference/random\linear_congruential_engine\seed
// linear_congruential_engine::seed example
#include <chrono>
#include <iostream>
#include <random>

int main()
{
    typedef std::chrono::high_resolution_clock myclock;
    myclock::time_point beginning = myclock::now();

    // obtain a seed from a user string:
    std::string str;
    std::cout << "Please, enter a seed: ";
    std::getline(std::cin, str);
    std::seed_seq seed1(str.begin(), str.end());

    // obtain a seed from the timer
    myclock::duration d = myclock::now() - beginning;
    unsigned seed2 = d.count();

    std::minstd_rand0 generator(seed1); // minstd_rand0 is a standard linear_congruential_engine
    std::cout << "Your seed produced: " << generator() << std::endl;

    generator.seed(seed2);
    std::cout << "A time seed produced: " << generator() << std::endl;

    return 0;
}
