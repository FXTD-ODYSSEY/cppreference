// cppreference link https://en.cppreference.com/w/cpp/numeric/random/seed_seq/param
#include <iostream>
#include <iterator>
#include <random>
int main()
{
    std::seed_seq s1 = { -1, 0, 1 };
    s1.param(std::ostream_iterator<int>(std::cout, " "));
}
