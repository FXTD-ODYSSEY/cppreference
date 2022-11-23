// cplusplus link https://cplusplus.com/reference/random\generate_canonical
// generate_canonical
#include <chrono>
#include <iostream>
#include <limits>
#include <random>

int main()
{
    // obtain a seed from the system clock:
    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();

    std::default_random_engine generator(seed);
    double d = std::generate_canonical<double, std::numeric_limits<double>::digits>(generator);

    std::cout << "Canonical random value: " << d << std::endl;

    return 0;
}
