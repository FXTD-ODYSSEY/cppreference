// cplusplus link https://cplusplus.com/reference/random\mersenne_twister_engine\mersenne_twister_engine
// mersenne_twister_engine constructor
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

    std::mt19937 g1(seed1); // mt19937 is a standard mersenne_twister_engine
    std::cout << "A time seed produced: " << g1() << std::endl;

    std::mt19937 g2(seed2);
    std::cout << "Your seed produced: " << g2() << std::endl;

    return 0;
}
