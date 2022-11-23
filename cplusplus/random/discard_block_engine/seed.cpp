// cplusplus link https://cplusplus.com/reference/random\discard_block_engine\seed
// discard_block_engine::seed example
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

    // ranlux24 is a standard instantitation of discard_block_engine:
    std::ranlux24 generator(seed1);
    std::cout << "Your seed produced: " << generator() << std::endl;

    generator.seed(seed2);
    std::cout << "A time seed produced: " << generator() << std::endl;

    return 0;
}
