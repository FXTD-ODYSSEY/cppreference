// cppreference link https://en.cppreference.com/w/cpp/numeric/random/discrete_distribution/probabilities
#include <iostream>
#include <random>
#include <vector>
int main()
{
    std::discrete_distribution<> d({ 40, 10, 10, 40 });
    std::vector<double> p = d.probabilities();
    for (auto n : p)
        std::cout << n << ' ';
    std::cout << '\n';
}
