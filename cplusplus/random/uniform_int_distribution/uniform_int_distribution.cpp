// cplusplus link https://cplusplus.com/reference/random\uniform_int_distribution\uniform_int_distribution
// uniform_int_distribution example
#include <chrono>
#include <iostream>
#include <random>

int main()
{
    // construct a trivial random generator engine from a time-based seed:
    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
    std::default_random_engine generator(seed);

    std::uniform_int_distribution<int> distribution(1, 100);

    int guess;
    int number = distribution(generator);

    while (true) {
        std::cout << "guess the number (between 1 and 100): ";
        std::cin >> guess;
        if (number == guess) {
            std::cout << "right!\n";
            break;
        } else if (number > guess)
            std::cout << "it's greater\n";
        else
            std::cout << "it's less\n";
    }

    return 0;
}
