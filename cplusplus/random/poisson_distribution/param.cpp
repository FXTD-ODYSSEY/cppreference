// cplusplus link https://cplusplus.com/reference/random\poisson_distribution\param
// poisson_distribution::param
#include <iostream>
#include <random>

int main()
{
    std::default_random_engine generator;
    std::poisson_distribution<int> d1(6.6);
    std::poisson_distribution<int> d2(d1.param());

    // print two independent values:
    std::cout << d1(generator) << std::endl;
    std::cout << d2(generator) << std::endl;

    return 0;
}
