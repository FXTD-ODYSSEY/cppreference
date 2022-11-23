// cplusplus link https://cplusplus.com/reference/random\discrete_distribution\discrete_distribution
// discrete_distribution constructor
#include <array>
#include <chrono>
#include <functional>
#include <iostream>
#include <random>

int main()
{
    // construct a trivial random generator engine from a time-based seed:
    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
    std::default_random_engine generator(seed);

    std::array<double, 4> init = { 1.0, 2.0, 3.0, 4.0 };

    std::discrete_distribution<int> first;
    std::discrete_distribution<int> second(init.begin(), init.end());
    std::discrete_distribution<int> third { 0.1, 0.2, 0.3, 0.4 };
    std::discrete_distribution<int> fourth(4, 0.0, 40.0, std::bind2nd(std::plus<double>(), 5.0));
    std::discrete_distribution<int> fifth(fourth.param());

    // display probabilities:
    std::cout << "displaying probabilities:";
    std::cout << std::endl
              << "first : ";
    for (double x : first.probabilities())
        std::cout << x << " ";
    std::cout << std::endl
              << "second: ";
    for (double x : second.probabilities())
        std::cout << x << " ";
    std::cout << std::endl
              << "third : ";
    for (double x : third.probabilities())
        std::cout << x << " ";
    std::cout << std::endl
              << "fourth: ";
    for (double x : fourth.probabilities())
        std::cout << x << " ";
    std::cout << std::endl
              << "fifth : ";
    for (double x : fifth.probabilities())
        std::cout << x << " ";
    std::cout << std::endl;

    return 0;
}
