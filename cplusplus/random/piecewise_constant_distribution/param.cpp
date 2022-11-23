// cplusplus link https://cplusplus.com/reference/random\piecewise_constant_distribution\param
// piecewise_constant_distribution::param
#include <iostream>
#include <random>

int main()
{
    std::default_random_engine generator;
    std::piecewise_constant_distribution<double> d1(5, 0.0, 10.0, [](double x) { return x; });
    std::piecewise_constant_distribution<double> d2(d1.param());

    // print two independent values:
    std::cout << d1(generator) << std::endl;
    std::cout << d2(generator) << std::endl;

    return 0;
}
