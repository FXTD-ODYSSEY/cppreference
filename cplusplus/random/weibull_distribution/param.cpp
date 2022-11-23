// cplusplus link https://cplusplus.com/reference/random\weibull_distribution\param
// weibull_distribution::param
#include <iostream>
#include <random>

int main()
{
    std::default_random_engine generator;
    std::weibull_distribution<double> d1(1.0, 5.0);
    std::weibull_distribution<double> d2(d1.param());

    // print two independent values:
    std::cout << d1(generator) << std::endl;
    std::cout << d2(generator) << std::endl;

    return 0;
}
