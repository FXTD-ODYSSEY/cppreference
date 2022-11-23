// cplusplus link https://cplusplus.com/reference/random\linear_congruential_engine\linear_congruential_engine
// linear_congruential_engine constructor
#include <chrono>
#include <iostream>
#include <random>

int main()
{
    // obtain a seed from the system clock:
    unsigned seed1 = std::chrono::system_clock::now().time_since_epoch().count();

    // obtain a seed from the user:
    std::string str;
    std::cout << "Please, enter a seed: ";
    std::getline(std::cin, str);
    std::seed_seq seed2(str.begin(), str.end());

    std::minstd_rand0 g1(seed1); // minstd_rand0 is a standard linear_congruential_engine
    std::cout << "A time seed produced: " << g1() << std::endl;

    std::minstd_rand0 g2(seed2);
    std::cout << "Your seed produced: " << g2() << std::endl;

    return 0;
}
