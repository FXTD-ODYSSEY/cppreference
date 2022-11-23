// cplusplus link https://cplusplus.com/reference/random\gamma_distribution\param
// gamma_distribution::param
#include <iostream>
#include <random>

int main()
{
    std::default_random_engine generator;
    std::gamma_distribution<double> d1(2.0, 2.0);
    std::gamma_distribution<double> d2(d1.param());

    // print two independent values:
    std::cout << d1(generator) << std::endl;
    std::cout << d2(generator) << std::endl;

    return 0;
}
