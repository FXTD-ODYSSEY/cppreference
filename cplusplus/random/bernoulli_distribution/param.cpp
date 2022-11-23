// cplusplus link https://cplusplus.com/reference/random\bernoulli_distribution\param
// bernoulli_distribution::param
#include <iostream>
#include <random>

int main()
{
    std::default_random_engine generator;
    std::bernoulli_distribution d1(0.7);
    std::bernoulli_distribution d2(d1.param());

    // print two independent values:
    std::cout << std::boolalpha;
    std::cout << d1(generator) << std::endl;
    std::cout << d2(generator) << std::endl;

    return 0;
}
