// cplusplus link https://cplusplus.com/reference/random\extreme_value_distribution\param
// extreme_value_distribution::param
#include <iostream>
#include <random>

int main()
{
    std::default_random_engine generator;
    std::extreme_value_distribution<double> d1(1.0, 4.0);
    std::extreme_value_distribution<double> d2(d1.param());

    // print two independent values:
    std::cout << d1(generator) << std::endl;
    std::cout << d2(generator) << std::endl;

    return 0;
}
