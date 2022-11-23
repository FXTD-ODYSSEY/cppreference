// cplusplus link https://cplusplus.com/reference/random\student_t_distribution\param
// student_t_distribution::param
#include <iostream>
#include <random>

int main()
{
    std::default_random_engine generator;
    std::student_t_distribution<double> d1(5.0);
    std::student_t_distribution<double> d2(d1.param());

    // print two independent values:
    std::cout << d1(generator) << std::endl;
    std::cout << d2(generator) << std::endl;

    return 0;
}
