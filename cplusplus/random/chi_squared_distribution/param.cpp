// cplusplus link https://cplusplus.com/reference/random\chi_squared_distribution\param
// chi_squared_distribution::param
#include <iostream>
#include <random>

int main()
{
    std::default_random_engine generator;
    std::chi_squared_distribution<double> d1(4.0);
    std::chi_squared_distribution<double> d2(d1.param());

    // print two independent values:
    std::cout << d1(generator) << std::endl;
    std::cout << d2(generator) << std::endl;

    return 0;
}
