// cplusplus link https://cplusplus.com/reference/random\discrete_distribution\operator%28%29
// discrete_distribution example
#include <chrono>
#include <iostream>
#include <random>

int main()
{
    // construct a trivial random generator engine from a time-based seed:
    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
    std::default_random_engine generator(seed);

    // in a regular die, every number is equally likely:
    std::uniform_int_distribution<int> regular_die(1, 6);

    // in this loaded die, the 6 is three times more likely:
    std::discrete_distribution<int> loaded_die { 0, 1, 1, 1, 1, 1, 3 };

    int regular_score = 0;
    int loaded_score = 0;

    for (int i = 0; i < 1000; ++i) {
        int regular_roll = regular_die(generator);
        int loaded_roll = loaded_die(generator);
        if (regular_roll < loaded_roll)
            ++loaded_score;
        else if (regular_roll > loaded_roll)
            ++regular_score;
    }

    std::cout << "after 1000 experiments:" << std::endl;
    std::cout << "regular die won: " << regular_score << " times." << std::endl;
    std::cout << "loaded die won: " << loaded_score << " times." << std::endl;
    std::cout << "ties: " << (1000 - regular_score - loaded_score) << std::endl;

    return 0;
}
