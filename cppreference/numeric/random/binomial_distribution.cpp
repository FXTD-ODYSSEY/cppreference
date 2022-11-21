// cppreference link https://en.cppreference.com/w/cpp/numeric/random/binomial_distribution
#include <iomanip>
#include <iostream>
#include <map>
#include <random>
#include <string>

int main()
{
    std::random_device rd;
    std::mt19937 gen(rd());
    // perform 4 trials, each succeeds 1 in 2 times
    std::binomial_distribution<> d(4, 0.5);

    std::map<int, int> hist;
    for (int n = 0; n < 10000; ++n) {
        ++hist[d(gen)];
    }
    for (auto p : hist) {
        std::cout << p.first << ' '
                  << std::string(p.second / 100, '*') << '\n';
    }
}
