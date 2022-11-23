// cplusplus link https://cplusplus.com/reference/random\student_t_distribution\reset
// student_t_distribution::reset
#include <iostream>
#include <random>

int main()
{
    std::default_random_engine generator;
    std::student_t_distribution<double> distribution(5.0);

    // print two independent values:
    std::cout << distribution(generator) << std::endl;
    distribution.reset();
    std::cout << distribution(generator) << std::endl;

    return 0;
}
