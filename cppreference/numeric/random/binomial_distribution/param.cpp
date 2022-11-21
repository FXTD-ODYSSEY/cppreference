// cppreference link https://en.cppreference.com/w/cpp/numeric/random/binomial_distribution/param
#include <iostream>
#include <random>

int main()
{
    std::random_device rd;
    std::mt19937 gen(rd());
    using BinomialDist = std::binomial_distribution<>;
    BinomialDist bino_dis(1, 0.5);

    std::cout << "A sample of Binomial(  1, 0.5): " << bino_dis(gen) << '\n';

    // Use another parameter set
    bino_dis.param(BinomialDist::param_type(100, 0.9));
    std::cout << "A sample of Binomial(100, 0.9): " << bino_dis(gen) << '\n';
}
