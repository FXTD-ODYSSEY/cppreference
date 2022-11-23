// cplusplus link https://cplusplus.com/reference/random\geometric_distribution\param
// geometric_distribution::param
#include <iostream>
#include <random>

int main()
{
    std::default_random_engine generator;
    std::geometric_distribution<int> d1(0.25);
    std::geometric_distribution<int> d2(d1.param());

    // print two independent values:
    std::cout << d1(generator) << std::endl;
    std::cout << d2(generator) << std::endl;

    return 0;
}
