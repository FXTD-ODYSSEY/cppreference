// cppreference link https://en.cppreference.com/w/cpp/numeric/random/negative_binomial_distribution
#include <iomanip>
#include <iostream>
#include <map>
#include <random>
#include <string>

int main()
{
    std::random_device rd;
    std::mt19937 gen(rd());
    // Pat goes door-to-door selling cookies
    // At each house, there's a 75% chance that she sells one box
    // how many times will she be turned away before selling 5 boxes?
    std::negative_binomial_distribution<> d(5, 0.75);

    std::map<int, int> hist;
    for (int n = 0; n < 10000; ++n) {
        ++hist[d(gen)];
    }
    for (auto p : hist) {
        std::cout << std::setw(2) << p.first << ' '
                  << std::string(p.second / 100, '*') << '\n';
    }
}
