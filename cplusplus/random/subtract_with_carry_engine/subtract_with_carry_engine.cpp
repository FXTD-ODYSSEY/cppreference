// cplusplus link https://cplusplus.com/reference/random\subtract_with_carry_engine\subtract_with_carry_engine
// subtract_with_carry_engine example
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

    std::subtract_with_carry_engine<unsigned, 24, 10, 24> g1(seed1);
    std::cout << "Your seed produced: " << g1() << std::endl;

    std::subtract_with_carry_engine<unsigned, 24, 10, 24> g2(seed2);
    std::cout << "A time seed produced: " << g2() << std::endl;

    return 0;
}
