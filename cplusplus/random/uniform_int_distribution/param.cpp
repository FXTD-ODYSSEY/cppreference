// cplusplus link https://cplusplus.com/reference/random\uniform_int_distribution\param
// uniform_int_distribution::param
#include <iostream>
#include <random>

int main()
{
    std::default_random_engine generator;
    std::uniform_int_distribution<int> d1(1, 100);
    std::uniform_int_distribution<int> d2(d1.param());

    // print two independent values:
    std::cout << d1(generator) << std::endl;
    std::cout << d2(generator) << std::endl;

    return 0;
}
