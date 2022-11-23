// cplusplus link https://cplusplus.com/reference/algorithm\shuffle
// shuffle algorithm example
#include <algorithm> // std::shuffle
#include <array> // std::array
#include <chrono> // std::chrono::system_clock
#include <iostream> // std::cout
#include <random> // std::default_random_engine

int main()
{
    std::array<int, 5> foo { 1, 2, 3, 4, 5 };

    // obtain a time-based seed:
    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();

    shuffle(foo.begin(), foo.end(), std::default_random_engine(seed));

    std::cout << "shuffled elements:";
    for (int& x : foo)
        std::cout << ' ' << x;
    std::cout << '\n';

    return 0;
}
