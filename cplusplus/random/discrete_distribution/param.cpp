// cplusplus link https://cplusplus.com/reference/random\discrete_distribution\param
// discrete_distribution::param
#include <iostream>
#include <random>

int main()
{
    std::default_random_engine generator;
    std::discrete_distribution<int> d1 { 10.0, 20.0, 20.0, 25.0, 25.0 };
    std::discrete_distribution<int> d2(d1.param());

    // print two independent values:
    std::cout << d1(generator) << std::endl;
    std::cout << d2(generator) << std::endl;

    return 0;
}
