// cplusplus link https://cplusplus.com/reference/random\binomial_distribution\param
// binomial_distribution::param
#include <iostream>
#include <random>

int main()
{
    std::default_random_engine generator;
    std::binomial_distribution<int> d1(100, 0.5);
    std::binomial_distribution<int> d2(d1.param());

    // print two independent values:
    std::cout << d1(generator) << std::endl;
    std::cout << d2(generator) << std::endl;

    return 0;
}
