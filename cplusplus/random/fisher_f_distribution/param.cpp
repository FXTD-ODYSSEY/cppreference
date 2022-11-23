// cplusplus link https://cplusplus.com/reference/random\fisher_f_distribution\param
// fisher_f_distribution::param
#include <iostream>
#include <random>

int main()
{
    std::default_random_engine generator;
    std::fisher_f_distribution<double> d1(2.0, 2.0);
    std::fisher_f_distribution<double> d2(d1.param());

    // print two independent values:
    std::cout << d1(generator) << std::endl;
    std::cout << d2(generator) << std::endl;

    return 0;
}
