// cplusplus link https://cplusplus.com/reference/random\bernoulli_distribution\bernoulli_distribution
// bernoulli_distribution example: fortune-teller
#include <iostream>
#include <random>
#include <string>

int main()
{
    std::cout << "Please, enter a yes/no question (I will answer it):" << std::endl;
    std::string text;
    getline(std::cin, text);

    std::seed_seq seed(text.begin(), text.end()); // seed using question
    std::default_random_engine generator(seed);
    std::bernoulli_distribution distribution(0.5);

    bool result = distribution(generator);
    std::cout << (result ? "yes" : "no") << std::endl;

    return 0;
}
