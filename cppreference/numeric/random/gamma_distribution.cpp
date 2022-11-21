// cppreference link https://en.cppreference.com/w/cpp/numeric/random/gamma_distribution
#include <iomanip>
#include <iostream>
#include <map>
#include <random>
#include <string>
int main()
{
    std::random_device rd;
    std::mt19937 gen(rd());

    // A gamma distribution with alpha=1, and beta=2
    // approximates an exponential distribution.
    std::gamma_distribution<> d(1, 2);

    std::map<int, int> hist;
    for (int n = 0; n < 10000; ++n) {
        ++hist[2 * d(gen)];
    }
    for (auto p : hist) {
        if (p.second / 100. > 0.5)
            std::cout
                << std::fixed << std::setprecision(1)
                << p.first / 2.0 << '-' << (p.first + 1) / 2.0 << ' '
                << std::string(p.second / 100, '*') << '\n';
    }
}
